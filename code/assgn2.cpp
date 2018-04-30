#include<fstream>
#include<iostream>
#include"draw.h"
#include<string>
using namespace std;


int main( ){
    fstream input;
    int counter = 1;
    string output = "out.svg";
   
    
    input.open("input.txt", ios::in);


    fstream out;
    out.open(output , ios::out);

    out<<  "<svg width=\"1800\" height=\"1800\" viewBox=\"-1.25 -1.25 15 15\" version=\"1.1\" xmlns=\"http://www.w3.org/2000/svg\" onload=\"init(evt)\">\n";
	out<<  "<style>\n";
	out<<  "\t.button{\n";
	out<<  "\t    fill:           \t#225EA8;\n";
	out<<  "\t\tstroke:   \t\t\t#0C2C84;\n";
	out<<  "\t\tstroke-miterlimit:\t6;\n";
	out<<  "\t\tstroke-linecap:\t\tround;\n";
	out<<  "\t}\n";
	out<<  "\t.button:hover{\n";
	out<<  "\t\tstroke-width:   \t2;\n";
	out<<  "\t}\n";
	out<<  "\t.plus-minus{\n";
	out<<  "\t\tfill:\t#fff;\n";
	out<<  "\t\tpointer-events: none;\n";
	out<<  "\t}\n";
	out<<  "</style>\n";
	out<<  "\n";
	out<<  "<script type=\"text/ecmascript\">\n";
	out<<  "<![CDATA[\n";
	out<<  "\tvar transMatrix = [1,0,0,1,0,0];\n";
	out<<  "    \n";
	out<<  "    function init(evt)\n";
	out<<  "    {\n";
	out<<  "        if ( window.svgDocument == null )\n";
	out<<  "        {\n";
	out<<  "            svgDoc = evt.target.ownerDocument;\n";
	out<<  "\n";
	out<<  "        }\n";
	out<<  "        mapMatrix = svgDoc.getElementById(\"map-matrix\");\n";
	out<<  "        width  = evt.target.getAttributeNS(null, \"width\");\n";
	out<<  "        height = evt.target.getAttributeNS(null, \"height\");\n";
	out<<  "    }\n";
	out<<  "    \n";
	out<<  "    function pan(dx, dy)\n";
	out<<  "    {\n";
	out<<  "    \t\n";
	out<<  "\t\ttransMatrix[4] += dx;\n";
	out<<  "\t\ttransMatrix[5] += dy;\n";
	out<<  "        \n";
	out<<  "\t\tnewMatrix = \"matrix(\" +  transMatrix.join(' ') + \")\";\n";
	out<<  "\t\tmapMatrix.setAttributeNS(null, \"transform\", newMatrix);\n";
	out<<  "    }\n";
	out<<  "    \n";
	out<<  "\tfunction zoom(scale)\n";
	out<<  "\t{\n";
	out<<  "\t\tfor (var i=0; i<transMatrix.length; i++)\n";
	out<<  "\t\t{\n";
	out<<  "\t\t\ttransMatrix[i] *= scale;\n";
	out<<  "\t\t}\n";
	out<<  "\t\t//transMatrix[4] += (1-scale)*width/2;\n";
	out<<  "\t\t//transMatrix[5] += (1-scale)*height/2;\n";
	out<<  "\t        \n";
	out<<  "\t\tnewMatrix = \"matrix(\" +  transMatrix.join(' ') + \")\";\n";
	out<<  "\t\tmapMatrix.setAttributeNS(null, \"transform\", newMatrix);\n";
	out<<  "    }\n";
	out<<  "]]>\n";
	out<<  "</script>\n";
	out<<  "<g id=\"map-matrix\" transform=\"matrix(1 0 0 1 0 0)\">\n";
	out<< " <g transform = \"translate(0,0) scale(.01)\"> ";
    
    out.close();

    char c;
    float o;
    int t;
    
    while(input>>c){
        int a, b;
                    string val; 

        if(c == 'R'){
            
            cout<<c;
            input>>t;
            cout<<t<<" ";
            
            text(550,counter*50+100 , "R"+to_string(t), output );
            
            input>>c;
            
            if(c == '0'){
                t = 0;
            }else{
            input>>c>>c;
            input>>t;
            }

            a = t;

            cout<<t<<" ";
            input>>c;
            if(c == '0'){
                t = 0;
            }else{
            input>>c>>c;
            input>>t;
            }

            b = t;
            cout<<t<<" ";
           
            input>>val;
		cout<<val<<endl;
	
            counter++;
            
             text(570,counter*50+50 , " "+val+" Ω", output );

            line(300,a*75+75 ,350, counter*50+50 , output );
            line(300,b*75+75 ,500, counter*50+50 , output );
                    text(200, a*75+75 , "NET"+to_string(a) , output );
                    text(200, b*75+75 , "NET"+to_string(b) , output );
            
            registor(350, counter*50+50 , output);

        }        
         else if(c == 'C'){
            cout<<c;
            input>>t;
            cout<<t<<" ";
            text(550,counter*50+100 , "C"+to_string(t), output );
            
            input>>c;
            
            if(c == '0'){
                t = 0;
            }else{
            input>>c>>c;
            input>>t;
            }
            a=t;

            cout<<t<<" ";
            input>>c;
            if(c == '0'){
                t = 0;
            }else{
            input>>c>>c;
            input>>t;
            }
            b=t;
            cout<<t<<" ";
            input>>val;
		cout<<val<<endl;
	
            counter++;
            
             text(570,counter*50+50 , " "+val, output );

            line(300,a*75+75 ,350, counter*50+50 , output );
            line(300,b*75+75 ,500, counter*50+50 , output );
            
             text(200, a*75+75 , "NET"+to_string(a) , output );
                    text(200, b*75+75 ,"NET"+ to_string(b) , output );

            capacitor(350, counter*50+50 , output);
            input>>val;
        }
        else if(c == 'L'){
            cout<<c;
            input>>t;
            cout<<t<<" ";
            text(550,counter*50+100 , "L"+to_string(t), output );
            
            input>>c;
            if(c == '0'){
                t = 0;
            }else{
            input>>c>>c;
            input>>t;
            }
            a=t;

            cout<<t<<" ";
            input>>c;
            if(c == '0'){
                t = 0;
            }else{
            input>>c>>c;
            input>>t;
            }
            b=t;

            cout<<t<<" ";
            input>>val;
		cout<<val<<endl;
	
            counter++;
            
             text(570,counter*50+50 , " "+val, output );

            line(300,a*75+75 ,350, counter*50+50 , output );
            line(300,b*75+75 ,500, counter*50+50 , output );
            
             text(200, a*75+75 , "NET"+to_string(a) , output );
                    text(200, b*75+75 , "NET"+to_string(b) , output );

            inductor(350, counter*50+50 , output);
            
            input>>val;
        }
        else if(c == 'V'){
            cout<<c;
            input>>t;
            cout<<t<<" ";
            
            text(550,counter*50+100 , "V"+to_string(t), output );
            
            input>>c;
            if(c == '0'){
                t = 0;
            }else{
            input>>c>>c;
            input>>t;
            }
            a=t;

            cout<<t<<" ";
            input>>c;
            if(c == '0'){
                t = 0;
            }else{
            input>>c>>c;
            input>>t;
            }
            b=t;

            cout<<t<<" ";
            input>>c;
            cout<<c<<" ";
            input>>c>>c>>c>>c;
            input>>t;
            cout<<t<<" ";
            input>>t;
            cout<<t<<" ";
            input>>o;
            cout<<o<<" ";
            input>>c>>c>>c>>o;
            cout<<o<<" ";
            input>>c>>o;
            cout<<o<<endl;
            input>>c;

            counter++;

            line(300,a*75+75 ,350, counter*50+50 , output );
            line(300,b*75+75 ,500, counter*50+50 , output );
            
             text(200, a*75+75 , "NET"+to_string(a) , output );
                    text(200, b*75+75 , "NET"+to_string(b) , output );
            

            voltage(350, counter*50+50 , output);
        }
        else if(c == 'I'){
            cout<<c;
            input>>t;
            cout<<t<<" ";
            text(550,counter*50+100 , "I"+to_string(t), output );
            
            input>>c;
            if(c == '0'){
                t = 0;
            }else{
            input>>c>>c;
            input>>t;
            }
            a=t;

            cout<<t<<" ";
            input>>c;
            if(c == '0'){
                t = 0;
            }else{
            input>>c>>c;
            input>>t;
            }
            b=t;

	input>>val;

            counter++;

            line(300,a*75+75 ,350, counter*50+50 , output );
            line(300,b*75+75 ,500, counter*50+50 , output );
            
             text(200, a*75+75 , "NET"+to_string(a) , output );
                    text(200, b*75+75 , "NET"+to_string(b) , output );

            current(350, counter*50+50 , output);
        }else   {
            cout<<c<<"<-------404 Not Found!"<<endl;     
            break;
        }
        

    }



    out.open(output , ios::app);
    out<< "</g>\n";
	out<< "</g>\n";
	out<< "\n";
	out<< "<g transform=\"matrix(0.01 0 0 0.01 -1 -1)\">\n";
	out<< "<circle cx=\"50\" cy=\"50\" r=\"42\" fill=\"red\" opacity=\"0.75\"/>\n";
	out<< "<path class=\"button\" onclick=\"pan( 0, 0.3)\" d=\"M50 10 l12   20 a40, 70 0 0,0 -24,  0z\" />\n";
	out<< "<path class=\"button\" onclick=\"pan( 0.3, 0)\" d=\"M10 50 l20  -12 a70, 40 0 0,0   0, 24z\" />\n";
	out<< "<path class=\"button\" onclick=\"pan( 0,-0.3)\" d=\"M50 90 l12  -20 a40, 70 0 0,1 -24,  0z\" />\n";
	out<< "<path class=\"button\" onclick=\"pan(-0.3, 0)\" d=\"M90 50 l-20 -12 a70, 40 0 0,1   0, 24z\" />\n";
	out<< "  \n";
	out<< "<circle class=\"compass\" cx=\"50\" cy=\"50\" r=\"20\"/>\n";
	out<< "<circle class=\"button\"  cx=\"50\" cy=\"41\" r=\"8\" onclick=\"zoom(0.95)\"/>\n";
	out<< "<circle class=\"button\"  cx=\"50\" cy=\"59\" r=\"8\" onclick=\"zoom(1.05)\"/>\n";
	out<< "\n";
	out<< "<rect class=\"plus-minus\" x=\"46\" y=\"39.5\" width=\"8\" height=\"3\"/>\n";
	out<< "<rect class=\"plus-minus\" x=\"46\" y=\"57.5\" width=\"8\" height=\"3\"/>\n";
	out<< "<rect class=\"plus-minus\" x=\"48.5\" y=\"55\" width=\"3\" height=\"8\"/>\n";
	out<< "</g>\n";
	out<<  "</svg>\n";
    out.close();

    return 0;
}




