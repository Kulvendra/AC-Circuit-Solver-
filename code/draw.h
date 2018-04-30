#ifndef _DRAW_
#define _DRAW_

#include<iostream>
#include<fstream>
using namespace std;

void line(int x1,int y1,int x2,int y2,string file){

fstream fl;
	fl.open(file , ios::app);

	fl<<"<line x1=\""<<x1<<"\" y1=\""<<y1<<"\" x2=\""<<x2<<"\" y2=\""<<y2<<"\" style=\"stroke:rgb(0,0,0);stroke-width:1\" />"<<endl;

	fl.close();

}


void registor(int x, int y ,string file)
{	
	fstream fl;
	fl.open(file , ios::app);
	fl<<"<g transform = \"translate(" <<x<< "," <<y<< ")\">"<<endl;
	fl<<"<line x1=\"0\" y1=\"0\" x2=\"30\" y2=\"0\" style=\"stroke:rgb(255,0,0);stroke-width:2\" />"<<endl;
	fl<<"<line x1=\"30\" y1=\"0\" x2=\"40\" y2=\"-10\" style=\"stroke:rgb(255,0,0);stroke-width:4\" />"<<endl;
 	fl<<"<line x1=\"40\" y1=\"-10\" x2=\"50\" y2=\"10\" style=\"stroke:rgb(255,0,0);stroke-width:4\" />"<<endl;
 
	 fl<<"<line x1=\"50\" y1=\"10\" x2=\"60\" y2=\"-10\" style=\"stroke:rgb(255,0,0);stroke-width:4\" />"<<endl;
	 fl<<" <line x1=\"60\" y1=\"-10\" x2=\"70\" y2=\"10\" style=\"stroke:rgb(255,0,0);stroke-width:4\" />"<<endl;
	 fl<<" <line x1=\"70\" y1=\"10\" x2=\"80\" y2=\"-10\" style=\"stroke:rgb(255,0,0);stroke-width:4\" />"<<endl;
	 
	 fl<<" <line x1=\"80\" y1=\"-10\" x2=\"90\" y2=\"10\" style=\"stroke:rgb(255,0,0);stroke-width:4\" />"<<endl;
	 fl<<" <line x1=\"90\" y1=\"10\" x2=\"100\" y2=\"0\" style=\"stroke:rgb(255,0,0);stroke-width:4\" />"<<endl;
	 fl<<" <line x1=\"100\" y1=\"0\" x2=\"150\" y2=\"0\" style=\"stroke:rgb(255,0,0);stroke-width:2\" />"<<endl;    
				 fl<<"</g>"<<endl;

		fl.close();
}

void capacitor(int x,int y,string file)
{
	fstream fl;
	fl.open(file , ios::app);

fl<<"<g transform = \"translate(" <<x<<"," <<y<<")\">"<<endl;
 
 fl<<"<line x1=\"0\" y1=\"0\" x2=\"40\" y2=\"0\" style=\"stroke:rgb(255,0,0);stroke-width:2\" />"<<endl;
	 fl<<"<line x1=\"40\" y1=\"-20\" x2=\"40\" y2=\"20\" style=\"stroke:rgb(255,0,0);stroke-width:2\" />"<<endl;
		fl<<"<line x1=\"60\" y1=\"-20\" x2=\"60\" y2=\"20\" style=\"stroke:rgb(255,0,0);stroke-width:2\" />"<<endl;
		 fl<<"<line x1=\"60\" y1=\"0\" x2=\"150\" y2=\"0\" style=\"stroke:rgb(255,0,0);stroke-width:2\" />"<<endl;
	

fl<<"  </g>"<<endl;
		fl.close();

}

void inductor(int x,int y,string file)
{
		fstream fl;
	fl.open(file , ios::app);

	fl<<"<g transform = \"translate(" <<x-2<<"," <<y-17<<") scale(2)\">"<<endl;
 fl<<"<path "<<endl;
	 fl<<" style=\"fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:rgb(255,0,0);stroke-width:2;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1\""<<endl;	 
		 
		 
		fl<<" d=\"M 1,8.5 L 6.5,8.5 C 6.5,8.5 6.5,4.5 10.5,4.5 C 14.5,4.5 14.5,8.5 14.5,8.5 C 14.5,8.5 14.5,4.5 18.5,4.5 C 22.5,4.5 22.5,8.5 22.5,8.5 C 22.5,8.5 22.5,4.5 26.5,4.5 C 30.5,4.5 30.5,8.5 30.5,8.5 C 30.5,8.5 30.5,4.5 34.5,4.5 C 38.5,4.5 38.5,8.5 38.5,8.5 L 75,8.5 \" />"<<endl;
		
		
		
	 fl<<"  </g>"<<endl;
		fl.close();

}

void current(int x,int y,string file)
{
	fstream fl;
	fl.open(file , ios::app);

 fl<<" <g transform = \"translate(" <<155+x<< "," <<y-28<< ") scale(1.2) rotate(90)\">  "<<endl;
	fl<<" <path "<<endl;
			 fl<<" d=\"M 25,55.04878 L 25,17\" "<<endl;
			 fl<<" style=\"fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:rgb(255,0,0);stroke-width:2;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1\"/> "<<endl;
				
		fl<<"<path "<<endl;
			fl<<" d=\"M 25,15.5 L 27,18.5 L 23,18.5 L 25,15.5 z \""<<endl;
			 fl<<"style=\"fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:rgb(255,0,0);stroke-width:2;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1\"/> "<<endl;
			 
		fl<<" <path "<<endl;
			 fl<<" d=\"M 40,25 C 40,33.284271 33.284271,40 25,40 C 16.715729,40 10,33.284271 10,25 C 10,16.715729 16.715729,10 25,10 C 33.284271,10 40,16.715729 40,25 L 40,25 z \""<<endl;
			 fl<<" style=\"fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:rgb(255,0,0);stroke-width:2;stroke-linecap:butt;stroke-linejoin:miter;stroke-dashoffset:0;stroke-opacity:1\" />"<<endl;
			
		fl<<" <path "<<endl;
			fl<<" d=\"M 25,10 L 25,3\" "<<endl;
			 fl<<" style=\"fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:rgb(255,0,0);stroke-width:2;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1\"/> "<<endl;
				
		fl<<" <path "<<endl;
		fl<<" d=\"M 25,40 L 25,130\" "<<endl;
		
		fl<<" style=\"fill:none;fill-opacity:0.75;fill-rule:evenodd;stroke:rgb(255,0,0);stroke-width:2;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1\"/> "<<endl;
				
		 fl<<" </g> "<<endl;
		fl.close();

}

void voltage(int x, int y,string file)
{
	fstream fl;
	fl.open(file , ios::app);

fl<<" <line x1=\""<<x<<"\" y1=\""<<y<<"\" x2=\""<<x+30<<"\" y2=\""<<y<<"\" style=\"stroke:rgb(255,0,0);stroke-width:2\" />";
fl<<" <line x1=\""<<x+65<<"\" y1=\""<<y<<"\" x2=\""<<x+150<<"\" y2=\""<<y<<"\" style=\"stroke:rgb(255,0,0);stroke-width:2\" />";
	fl<< "<g  "<<endl;    

	fl<<" transform=\"translate("<<x+30<<","<<y-18<<") scale(2)\">"<<endl;
	
	
	
	
	fl<<" <path "<<endl;   
	fl<<" d=\"m 0.3478974,9.7865691 c 0.67934,2.0380199 2.07525,4.0760499 4.09466,4.0760499 2.01941,0 3.3781,-2.03803 4.05744,-4.0760499 0.6793396,-2.03803 2.0380296,-4.07605 4.0760496,-4.07605 2.03803,0 3.39671,2.03802 4.07605,4.07605\" "<<endl;
	fl<<"style=\"fill:none;fill-rule:evenodd;stroke:rgb(255,0,0);stroke-width:1.5;stroke-linecap:butt;stroke-linejoin:miter;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1\" /> "<<endl;
	fl<<" <circle "<<endl;
	fl<<" r=\"9.4854374\" "<<endl;
	fl<<" cy=\"9.7865725\" "<<endl;
	fl<<" cx=\"8.4999971\" "<<endl;       
	fl<<" style=\"color:rgb(255,0,0);clip-rule:nonzero;display:inline;overflow:visible;visibility:visible;opacity:1;isolation:auto;mix-blend-mode:normal;color-interpolation:sRGB;color-interpolation-filters:linearRGB;solid-color:#000000;solid-opacity:1;fill:none;fill-opacity:1;fill-rule:nonzero;stroke:rgb(255,0,0);stroke-width:1;stroke-linecap:butt;stroke-linejoin:miter;stroke-miterlimit:4;stroke-dasharray:none;stroke-dashoffset:0;stroke-opacity:1;marker:none;color-rendering:auto;image-rendering:auto;shape-rendering:auto;text-rendering:auto;enable-background:accumulate\" /> "<<endl;
	fl<<" </g> "<<endl;
	fl.close();

}

void text(int x,int y, string txt, string file)
{

	fstream fl;
	fl.open(file , ios::app);
fl<<" <text x=\""<<x<<"\" y=\""<<y<<"\" fill=\"red\">"<<txt<<"</text>"<<endl;
fl.close();

}


#endif
