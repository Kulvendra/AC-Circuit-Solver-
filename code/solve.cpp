#include<fstream>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<cstring>
#include<math.h>
#include<cstdlib>
using namespace std;
int cr=0;
int b=0;
int r=0;
float rv[100];
int cc=0;
int c=0;
float cv[100];
int cl=0;
int l=0;
float lv[100];
int cvs=0;
int cis=0;
int v=0;
int f=0;
float vv[100];
float fv[100];
float cuv[100];
float frv[100];
int sprc=0;
int spcc=0;
int spic=0;
int srlb=0;
int srcc=0;
int slcc=0;
int srlcc=0;
int pprc=0;
int ppcc=0;
int ppic=0;
int prlb=0;
int prcc=0;
int plcc=0;
int prlcc=0;
int spr=0;
int spc=0;
int spi=0;
int srl=0;
int src=0;
int slc=0;
int srlc=0;
int ppr=0;
int ppc=0;
int ppi=0;
int prl=0;
int prc=0;
int plc=0;
int prlc=0;
float digitextractor(string s,float skip,float to)
{
 float val=0;
for(float i=skip;i<to;i++)
   {
    val=val*10+s.at(i)-'0';
   }
   return val;
}
int main()
{ for(int a=0;a<100;a++)
   {rv[a]=0.0;
   cv[a]=0.0;
   lv[a]=0.0;
   fv[a]=0.0;
   vv[a]=0.0;
    frv[a]=0.0;
   cuv[a]=0.0;
   }
     ifstream file;
     ofstream out;
     file.open("input.txt",ios::in);
     out.open("out.txt",ios::out);
    string st[1000];
    int ins=0;
    while(getline(file,st[ins++]))
     {

     }

    for(int i=0;i<ins-1;i++)
   {
   char * pch;
   char str[st[i].length()];
   strcpy(str, st[i].c_str());
  pch = strtok (str," \t)(,");
  string s[10];
  int words=0;
  while (pch != NULL)
   {
   string sls(pch);
   s[words++]=sls;
    pch = strtok (NULL, " \t)(,");
    }
    if(words==4)
    {
        if((s[0].at(0)=='r')||(s[0].at(0)=='R'))
        {cr++;
         rv[++r]=digitextractor(s[3],0,s[3].length());
        }
         //else
        //out<<"\nwrong input check your units or read assumed formatting instructions\n";
        //exit(0);

    }
  else if(words==5)
    { if(((s[0].at(0)=='r')||(s[0].at(0)=='R'))&&((s[4].at(0)=='k')||(s[4].at(0)=='K')))
        {cr++;
         rv[++r]=digitextractor(s[3],0,s[3].length())*1000;
        }
        else if(((s[0].at(0)=='r')||(s[0].at(0)=='R'))&&((s[4].at(0)=='c')||(s[4].at(0)=='C')))
        {cr++;
         rv[++r]=digitextractor(s[3],0,s[3].length())/100;
        }
        else if(((s[0].at(0)=='r')||(s[0].at(0)=='R'))&&((s[4].at(0)=='d')||(s[4].at(0)=='D')))
        {cr++;
         rv[++r]=digitextractor(s[3],0,s[3].length())/10;
        }

        else if(((s[0].at(0)=='r')||(s[0].at(0)=='R'))&&((s[4].at(0)=='M')))
        {cr++;
         rv[++r]=digitextractor(s[3],0,s[3].length())*1000000;
        }
        else if(((s[0].at(0)=='c')||(s[0].at(0)=='C'))&&((s[4].at(0)=='m')))
        {cc++;
         cv[++c]=digitextractor(s[3],0,s[3].length())/1000;

        }
        else if(((s[0].at(0)=='c')||(s[0].at(0)=='C'))&&((s[4].at(0)=='u')||(s[4].at(0)=='U')))
        {cc++;
         cv[++c]=digitextractor(s[3],0,s[3].length())/1000000;

        }
        else if(((s[0].at(0)=='c')||(s[0].at(0)=='C'))&&((s[4].at(0)=='n')||(s[4].at(0)=='N')))
        {cc++;
         cv[++c]=digitextractor(s[3],0,s[3].length())/1000000000;

        }
        else if(((s[0].at(0)=='c')||(s[0].at(0)=='C'))&&((s[4].at(0)=='p')||(s[4].at(0)=='P')))
        {cc++;
         cv[++c]=digitextractor(s[3],0,s[3].length())/1000000000000;

        }
        if(((s[0].at(0)=='c')||(s[0].at(0)=='C'))&&((s[4].at(0)=='k')||(s[4].at(0)=='K')))
        {cc++;
         cv[++c]=digitextractor(s[3],0,s[3].length())*1000;
        }
        else if(((s[0].at(0)=='c')||(s[0].at(0)=='C'))&&((s[4].at(0)=='c')||(s[4].at(0)=='C')))
        {cc++;
         cv[++c]=digitextractor(s[3],0,s[3].length())/100;
        }
        else if(((s[0].at(0)=='c')||(s[0].at(0)=='C'))&&((s[4].at(0)=='d')||(s[4].at(0)=='D')))
        {cc++;
         cv[++c]=digitextractor(s[3],0,s[3].length())/10;
        }

        else if(((s[0].at(0)=='c')||(s[0].at(0)=='C'))&&((s[4].at(0)=='M')))
        {cc++;
         cv[++c]=digitextractor(s[3],0,s[3].length())*1000000;
        }

         else if(((s[0].at(0)=='l')||(s[0].at(0)=='L'))&&((s[4].at(0)=='m')))
        {cl++;
         lv[++l]=digitextractor(s[3],0,s[3].length())/1000;

        }
        else if(((s[0].at(0)=='l')||(s[0].at(0)=='L'))&&((s[4].at(0)=='u')||(s[4].at(0)=='U')))
        {cl++;
         lv[++l]=digitextractor(s[3],0,s[3].length())/1000000;

        }
        else if(((s[0].at(0)=='l')||(s[0].at(0)=='L'))&&((s[4].at(0)=='n')||(s[4].at(0)=='N')))
        {cl++;
         lv[++l]=digitextractor(s[3],0,s[3].length())/1000000000;

        }
         else if(((s[0].at(0)=='l')||(s[0].at(0)=='L'))&&((s[4].at(0)=='p')||(s[4].at(0)=='P')))
        {cl++;
         lv[++l]=digitextractor(s[3],0,s[3].length())/1000000000000;

        }
        if(((s[0].at(0)=='l')||(s[0].at(0)=='L'))&&((s[4].at(0)=='k')||(s[4].at(0)=='K')))
        {cl++;
         lv[++l]=digitextractor(s[3],0,s[3].length())*1000;
        }
        else if(((s[0].at(0)=='l')||(s[0].at(0)=='L'))&&((s[4].at(0)=='c')||(s[4].at(0)=='C')))
        {cl++;
         lv[++l]=digitextractor(s[3],0,s[3].length())/100;
        }
        else if(((s[0].at(0)=='l')||(s[0].at(0)=='L'))&&((s[4].at(0)=='d')||(s[4].at(0)=='D')))
        {cl++;
         lv[++l]=digitextractor(s[3],0,s[3].length())/10;
        }

        else if(((s[0].at(0)=='l')||(s[0].at(0)=='L'))&&((s[4].at(0)=='M')))
        {cl++;
         lv[++l]=digitextractor(s[3],0,s[3].length())*1000000;
        }


        }

    else if(words==10)
    {
         if(((s[0].at(0)=='i')||(s[0].at(0)=='I'))&&(s[3].compare("SINE")==0)&&((s[7].at(0)=='h')||(s[7].at(0)=='H')))
    {cis++;
    cuv[++v]=digitextractor(s[5],0,s[5].length())  ;
    frv[++f]=digitextractor(s[6],0,s[6].length());
    }
  else if(((s[0].at(0)=='i')||(s[0].at(0)=='I'))&&((s[7].at(0)=='k')||(s[7].at(0)=='K')))
    {cis++;
    cuv[++v]=digitextractor(s[5],0,s[5].length())  ;
    frv[++f]=digitextractor(s[6],0,s[6].length())*1000;

    }
    else if(((s[0].at(0)=='i')||(s[0].at(0)=='I'))&&((s[7].at(0)=='d')||(s[7].at(0)=='D')))
    {cis++;
    cuv[++v]=digitextractor(s[5],0,s[5].length())  ;
    frv[++f]=digitextractor(s[6],0,s[6].length())/10;

    }
    else if(((s[0].at(0)=='i')||(s[0].at(0)=='I'))&&((s[7].at(0)=='c')||(s[7].at(0)=='C')))
    {cis++;
    cuv[++v]=digitextractor(s[5],0,s[5].length())  ;
    frv[++f]=digitextractor(s[6],0,s[6].length())/100;
    }


     else   if(((s[0].at(0)=='v')||(s[0].at(0)=='V'))&&(s[3].compare("SINE")==0)&&((s[7].at(0)=='h')||(s[7].at(0)=='H')))
    {cvs++;
    vv[++v]=digitextractor(s[5],0,s[5].length());
    fv[++f]=digitextractor(s[6],0,s[6].length());
    }
  else if(((s[0].at(0)=='v')||(s[0].at(0)=='V'))&&((s[7].at(0)=='k')||(s[7].at(0)=='K')))
    {cvs++;
    vv[++v]=digitextractor(s[5],0,s[5].length())  ;
    fv[++f]=digitextractor(s[6],0,s[6].length())*1000;

    }
    else if(((s[0].at(0)=='v')||(s[0].at(0)=='V'))&&((s[7].at(0)=='d')||(s[7].at(0)=='D')))
    {cvs++;
    vv[++v]=digitextractor(s[5],0,s[5].length())  ;
    fv[++f]=digitextractor(s[6],0,s[6].length())/10;

    }
    else if(((s[0].at(0)=='v')||(s[0].at(0)=='V'))&&((s[7].at(0)=='c')||(s[7].at(0)=='C')))
    {cvs++;
    vv[++v]=digitextractor(s[5],0,s[5].length())  ;
    fv[++f]=digitextractor(s[6],0,s[6].length())/100;

    }


    }

   }

    cout<<"\n Enter 1 For Voltage sources\n";
   cout<<"\n Enter 2 For Current sources\n";
   int choice;
   cout<<"\nEnter Your Choice\n";
   cin>>choice;
   if( choice==1)
   {

   cout<<"\n Enter 1 For Elements in Sereies\n";
   cout<<"\n Enter 2 For Elements in Parallel\n";
   int ch;
   cout<<"\nEnter Your Choice\n";
   cin>>ch;
   if( ch==1)
   {
       for(int x=1;x<=cvs;x++)
       {out<<"\n-------------------------------------------------------------------------------------------------------------\n";
        out<<"\nDATA FOR VOLTAGE SOURCE WITH AMPLITUDE "<<vv[x]<<" AND FREQUENCY "<<fv[x]<<"\n";
        out<<"\n-------------------------------------------------------------------------------------------------------------\n";
        cout<<"\n-------------------------------------------------------------------------------------------------------------\n";
        cout<<"\ FREQUENCY= "<<fv[x]<<"hz\n";
        cout<<"\n-------------------------------------------------------------------------------------------------------------\n";
       if((cc==0) && (cl==0) && (cr>=1))//for purely resistive circuit
    { float vsum=0;
      float rsum=0;
      float netcur=0;

      vsum+=vv[++spr];
      for(int d=1;d<=cr;d++)
        rsum+=rv[d];
        netcur=(vsum/rsum);
        cout<<"\nType of circuit- purely resistive\n";

        cout<<"\nmagnitude of total impedance "<<rsum<<" ohms\n";
         cout<<"\nphase of total impedance- "<<0<<" degree\n";
        cout<<"\nmagnitude of total current through voltage source   "<<netcur<<"  Amps\n";
          cout<<"\nphase of total current through voltage source- "<<0<<"  degree\n";
        cout<<"\ncurrent and voltage are in phase in purely resistive circuit\n";
         for(int e=1;e<=cr;e++)
           cout<<"\nVoltage drop across register number "<<e<<" is "<<netcur*rv[e]<<" volts\n";

            out<<"\nVOLTAGES\n";
            out<<"\nV"<<spr<<"  "<<vsum<<"  "<<0.00<<"\n";
             for(int u=1;u<=cr;u++)
            out<<"\nR"<<u<<"  "<<netcur*rv[u]<<"  "<<0.00<<"\n";
            out<<"\nCURRENTS\n";
           out<<"\nV"<<spr<<"  "<<netcur<<"  "<<0.000<<"\n";
             for(int g=1;g<=cr;g++)
            out<<"\nR"<<g<<"  "<<netcur<<"  "<<0.00<<"\n";


     }
     else if((cr==0) && (cl==0) && (cc>=1))//for purely capacitive circuit
     {float vsum=0.0;
      float csum=0.0;

      float fsum=0.0;

        vsum+=vv[++spc];
         fsum+=fv[spc];

        for(int d=1;d<=cc;d++)
        csum+=(1.0/(cv[d]));
        float cnet;
       cnet=1.0/csum ;
        float omega;
        omega=((2.0)*(3.14)*(fsum));
        float xc;
        xc=1.0/(omega*cnet);
              float netcur=0.0;
        netcur=vsum/xc;
         cout<<"\n Type of circuit- purely capacitive\n";
        cout<<"\n magnitude of total voltage "<<vsum<<" volts \n";
         cout<<"\n phase of total voltage- "<<0<<" degree \n";
        cout<<"\n magnitude of net impedance =  "<<xc<<"\n";
        cout<<"\n phase of total impedance = "<<-90<<" degree\n";
         cout<<"\n magnitude of total current through voltage source   "<<netcur<<"  Amps\n";
          cout<<"\n phase of total current through voltage source- "<<90<<"  degree\n";
          cout<<"\n current leads voltage by 90 degree in purely capacitive circuit\n";
           for(int e=1;e<=cc;e++)
            cout<<"\nVoltage drop across capacitor number "<<e<<" is "<<(vsum*cnet)/cv[e]<<" volts\n";
             out<<"\nVOLTAGES\n";
            out<<"\nV"<<spc<<"  "<<vsum<<"  "<<0.00<<"\n";
             for(int u=1;u<=cc;u++)
            out<<"\nC"<<u<<"  "<<(vsum*cnet)/cv[u]<<"  "<<0.00<<"\n";
            out<<"\nCURRENTS\n";
           out<<"\nV"<<spc<<"  "<<netcur<<"  "<<90<<"\n";
             for(int g=1;g<=cc;g++)
            out<<"\nC"<<g<<"  "<<netcur<<"  "<<90<<"\n";
       }
      else if((cc==0) && (cr==0) && (cl>=1))//for purely resistive circuit
    { float vsum=0.0;
      float lsum=0.0;
      float fsum=0.0;
      float netcur=0.0;


      vsum+=vv[++spi];
      fsum+=fv[spi];

    float lnet=0.0;
    for(int g=0;g<=cl;g++)
        lnet+=lv[g];
    float omega;
    omega=((2.0)*(3.14)*(fsum));
    float xl;
    xl=omega*lnet;
    netcur=vsum/xl;
        cout<<"\nType of circuit- purely inductive\n";
        cout<<"\nmagnitude of total voltage "<<vsum<<" volts \n";
         cout<<"\nphase of total voltage- "<<0<<" degree \n";
        cout<<"\nmagnitude of total impedance "<<xl<<" ohms\n";
         cout<<"\nphase of total impedance- "<<90<<" degree\n";
        cout<<"\nmagnitude of total current through voltage source   "<<netcur<<"  Amps\n";
          cout<<"\nphase of total current through voltage source- "<<-90<<"  degree\n";
           cout<<"\n voltage leads current by 90 degree in purely inductive circuit\n";
           for(int e=1;e<=cl;e++)
            cout<<"\nVoltage drop across inductor number "<<e<<" is "<<(vsum*lv[e])/lnet<<" volts\n";
             out<<"\nVOLTAGES\n";
            out<<"\nV"<<spi<<"  "<<vsum<<"  "<<0.00<<"\n";
             for(int u=1;u<=cl;u++)
            out<<"\nL"<<u<<"  "<<(vsum*lv[u])/lnet<<"  "<<0.00<<"\n";
            out<<"\nCURRENTS\n";
           out<<"\nV"<<spi<<"  "<<netcur<<"  "<<-90<<"\n";
             for(int g=1;g<=cl;g++)
            out<<"\nL"<<g<<"  "<<netcur<<"  "<<-90<<"\n";


     }
     else if((cl>=1) && (cr>=1) && (cc==0))
     {
         double vsum=0.0;
      double lsum=0.0;
      double fsum=0.0;

      vsum+=vv[++srl];
      fsum+=fv[srl];

    double lnet=0.0;
    for(int g=0;g<=cl;g++)
        lnet+=lv[g];
    double omega;
    omega=((2.0)*(3.14)*(fsum));
    float xl;
    xl=omega*lnet;
    double rsum=0.0;
    for(int d=1;d<=cr;d++)
        rsum+=rv[d];
        double xnet;
        double q;
        q=((rsum*rsum)+(xl*xl));
        xnet=sqrt(q);
        cout<<"\n net impedance = "<<xnet<<"\n";
        double phase;
        phase=atan(xl/rsum)*180/3.1415;
        double netcur;
        netcur=vsum/xnet;
        cout<<"\n net current drawn through voltage source is "<<netcur<<"\n";
        double iphase;
        iphase=-(phase);
        cout<<"\n phase of drawn current is "<<iphase<<"\n";
        double vrp,vlp;
        vrp=iphase;
        vlp=90+iphase;
        cout<<"\n phase of  voltage drawn by all resistor"<<vrp<<"\n";
        for(int t=1;t<=cr;t++)
        cout<<"\nVoltage drop across register number "<<t<<" is "<<netcur*rv[t]<<" volts\n";
        cout<<"\n phase of  voltage drawn by all inductor "<<vlp<<"\n";
        for(int n=1;n<=cl;n++)
        cout<<"\nVoltage drop across inductor number "<<n<<" is "<<netcur*lv[n]*omega<<" volts\n";
        out<<"\nVOLTAGES\n";
            out<<"\nV"<<srl<<"  "<<vsum<<"  "<<0.00<<"\n";
             for(int u=1;u<=cl;u++)
            out<<"\nL"<<u<<"  "<<netcur*lv[u]*omega<<"  "<<vlp<<"\n";
            for(int e=1;e<=cr;e++)
            out<<"\nR"<<e<<"  "<<netcur*rv[e]<<"  "<<vrp<<"\n";

            out<<"\nCURRENTS\n";
           out<<"\nV"<<srl<<"  "<<netcur<<"  "<<iphase<<"\n";
             for(int g=1;g<=cl;g++)
            out<<"\nL"<<g<<"  "<<netcur<<"  "<<iphase<<"\n";
             for(int f=1;f<=cr;f++)
            out<<"\nR"<<f<<"  "<<netcur<<"  "<<iphase<<"\n";
    }
      else if((cc>=1) && (cr>=1) && (cl==0))
     {
         double vsum=0.0;
      double csum=0.0;
      double fsum=0.0;


      vsum+=vv[++src];
      fsum+=fv[src];

    double cnet=0.0;
    for(int g=1;g<=cc;g++)
        csum+=1.0/cv[g];
        cnet=1.0/csum;
    double omega;
    omega=((2.0)*(3.14)*(fsum));
     double xc;
    xc=1.0/(omega*cnet);
    double rsum=0.0;
    for(int d=1;d<=cr;d++)
        rsum+=rv[d];
        double xnet;
        double q;
        q=((rsum*rsum)+(xc*xc));
        xnet=sqrt(q);
        cout<<"\n net impedance = "<<xnet<<"\n";
        double phase;
        phase=(atan(xc/rsum)*180*(-1))/3.1415;
        double netcur;
        netcur=vsum/xnet;
        cout<<"\n net current drawn through voltage source is "<<netcur<<"\n";
        double iphase;
        iphase=-(phase);
        cout<<"\n phase of drawn current is "<<iphase<<"\n";
        double vrp,vcp;
        vrp=iphase;
        vcp=iphase-90;
        cout<<"\n phase of  voltage drawn by all resistor"<<vrp<<"\n";
        for(int t=1;t<=cr;t++)
        cout<<"\nVoltage drop across register number "<<t<<" is "<<netcur*rv[t]<<" volts\n";
        cout<<"\n phase of  voltage drawn by all capacitor "<<vcp<<"\n";
        for(int n=1;n<=cc;n++)
        cout<<"\nVoltage drop across capcitor number "<<n<<" is "<<netcur/(cv[n]*omega)<<" volts\n";

             out<<"\nVOLTAGES\n";
            out<<"\nV"<<src<<"  "<<vsum<<"  "<<0.00<<"\n";
             for(int u=1;u<=cc;u++)
            out<<"\nC"<<u<<"  "<<netcur/(cv[u]*omega)<<"  "<<vcp<<"\n";
            for(int e=1;e<=cr;e++)
            out<<"\nR"<<e<<"  "<<netcur*rv[e]<<"  "<<vrp<<"\n";

            out<<"\nCURRENTS\n";
           out<<"\nV"<<src<<"  "<<netcur<<"  "<<iphase<<"\n";
             for(int g=1;g<=cc;g++)
            out<<"\nC"<<g<<"  "<<netcur<<"  "<<iphase<<"\n";
             for(int f=1;f<=cr;f++)
            out<<"\nR"<<f<<"  "<<netcur<<"  "<<iphase<<"\n";
     }
   else if((cc>=1) && (cl>=1) && (cr==0))
   {  double vsum=0.0;
      double csum=0.0;
      double fsum=0.0;


      vsum+=vv[++slc];
      fsum+=fv[slc];

    double cnet=0.0;
    for(int g=1;g<=cc;g++)
        csum+=1.0/cv[g];
        cnet=1.0/csum;
    double omega;
    omega=((2.0)*(3.14)*(fsum));
     double xc;
    xc=1/(omega*cnet);
     double lnet=0.0;
    for(int h=1;h<=cl;h++)
        lnet+=lv[h];
    double xl;
    xl=omega*lnet;
    double xnet,iphase;

    if(xl>xc)
    {xnet=xl-xc;
    iphase=90;
    }
    else if(xc>xl)
       { xnet=xc-xl;
       iphase=-90;
       }
  cout<<"\n net impedance "<<xnet<<"\n";
        double netcur;
        netcur=vsum/xnet;
        cout<<"\n current drawn from source "<<netcur<<"\n";
        cout<<"\n phase of current drawn "<<-(iphase)<<"\n";
        double vlp,vcp;
        vlp=-iphase+90;
        vcp=-iphase-90;
         cout<<"\n phase of  voltage drawn by all capacitor "<<vcp<<"\n";
        for(int n=1;n<=cc;n++)
        cout<<"\nVoltage drop across capcitor number "<<n<<" is "<<netcur/(cv[n]*omega)<<" volts\n";
         cout<<"\n phase of  voltage drawn by all inductor "<<vlp<<"\n";
        for(int o=1;o<=cl;o++)
        cout<<"\nVoltage drop across inductor number "<<o<<" is "<<netcur*lv[o]*omega<<" volts\n";

    out<<"\nVOLTAGES\n";
            out<<"\nV"<<slc<<"  "<<vsum<<"  "<<0.00<<"\n";
             for(int u=1;u<=cc;u++)
            out<<"\nC"<<u<<"  "<<netcur/(cv[u]*omega)<<"  "<<vcp<<"\n";
            for(int e=1;e<=cl;e++)
            out<<"\nL"<<e<<"  "<<netcur*lv[e]*omega<<"  "<<vlp<<"\n";

            out<<"\nCURRENTS\n";
           out<<"\nV"<<slc<<"  "<<netcur<<"  "<<-iphase<<"\n";
             for(int g=1;g<=cc;g++)
            out<<"\nC"<<g<<"  "<<netcur<<"  "<<-iphase<<"\n";
             for(int f=1;f<=cl;f++)
            out<<"\nL"<<f<<"  "<<netcur<<"  "<<-iphase<<"\n";
   }
   else if((cc>=1) && (cl>=1) && (cr>=1))
   {  double vsum=0.0;
      double csum=0.0;
      double fsum=0.0;


      vsum+=vv[++srlc];
      fsum+=fv[srlc];

    double cnet=0.0;
    for(int g=1;g<=cc;g++)
        csum+=1.0/cv[g];
        cnet=1.0/csum;
    double omega;
    omega=((2.0)*(3.14)*(fsum));
     double xc;
    xc=1.0/(omega*cnet);
     double lnet=0.0;
    for(int h=1;h<=cl;h++)
        lnet+=lv[h];
        double rsum=0.0;
    for(int x=1;x<=cr;x++)
        rsum+=rv[x];
    double xl;
    xl=omega*lnet;
    double xnet,iphase;
     double q;
        q=((rsum*rsum)+((xl-xc)*(xl-xc)));
        xnet=sqrt(q);
        cout<<"\n net impedance = "<<xnet<<"\n";
        if(xl>xc)
        iphase=atan((xl-xc)/rsum)*180/3.1415;
        else if(xc>xl)
     iphase=(atan((xc-xl)/rsum)*(-1)*180)/3.1415;
       double netcur;
        netcur=vsum/xnet;
        double phase;
        phase=-(iphase);
        cout<<"\n current drawn from source "<<netcur<<"\n";
        cout<<"\n phase of current drawn "<<phase<<"\n";
        double vlp,vcp,vrp;
        vrp=phase;
        vlp=phase+90;
        vcp=phase-90;
         cout<<"\n phase of  voltage drawn by all capacitor "<<vcp<<"\n";
        for(int n=1;n<=cc;n++)
        cout<<"\nVoltage drop across capcitor number "<<n<<" is "<<netcur/(cv[n]*omega)<<" volts\n";
         cout<<"\n phase of  voltage drawn by all inductor "<<vlp<<"\n";
        for(int o=1;o<=cl;o++)
        cout<<"\nVoltage drop across inductor number "<<o<<" is "<<netcur*lv[o]*omega<<" volts\n";
         cout<<"\n phase of  voltage drawn by all resistor "<<vrp<<"\n";
        for(int q=1;q<=cr;q++)
        cout<<"\nVoltage drop across register number "<<q<<" is "<<netcur*rv[q]<<" volts\n";

         out<<"\nVOLTAGES\n";
        out<<"\nV"<<srlc<<"  "<<vsum<<"  "<<0.00<<"\n";
             for(int u=1;u<=cc;u++)
            out<<"\nC"<<u<<"  "<<netcur/(cv[u]*omega)<<"  "<<vcp<<"\n";
            for(int e=1;e<=cl;e++)
            out<<"\nL"<<e<<"  "<<netcur*lv[e]*omega<<"  "<<vlp<<"\n";
            for(int t=1;t<=cr;t++)
            out<<"\nR"<<t<<"  "<<netcur*rv[t]<<"  "<<vrp<<"\n";

            out<<"\nCURRENTS\n";
           out<<"\nV"<<srlc<<"  "<<netcur<<"  "<<phase<<"\n";
             for(int g=1;g<=cc;g++)
            out<<"\nC"<<g<<"  "<<netcur<<"  "<<phase<<"\n";
             for(int f=1;f<=cl;f++)
            out<<"\nL"<<f<<"  "<<netcur<<"  "<<phase<<"\n";
             for(int y=1;y<=cr;y++)
            out<<"\nR"<<y<<"  "<<netcur<<"  "<<phase<<"\n";

   }
   }
   }
   if(ch==2 )
   {
       for(int y=1;y<=cvs;y++)
       { out<<"\n-------------------------------------------------------------------------------------------------------------\n";
           out<<"\nDATA FOR VOLTAGE SOURCE WITH AMPLITUDE "<<vv[y]<<" AND FREQUENCY "<<fv[y]<<"\n";
        out<<"\n-------------------------------------------------------------------------------------------------------------\n";
        cout<<"\n-------------------------------------------------------------------------------------------------------------\n";
        cout<<"\nDATA FOR VOLTAGE SOURCE WITH AMPLITUDE "<<vv[y]<<" AND FREQUENCY "<<fv[y]<<"\n";
        cout<<"\n-------------------------------------------------------------------------------------------------------------\n";
        if((cc==0) && (cl==0) && (cr>=1))//for purely resistive circuit
    { float vsum=0.0;
      float rsum=0.0;
      float netcur=0.0;

      vsum+=vv[++ppr];
      for(int d=1;d<=cr;d++)
        rsum+=1.0/rv[d];
        float rnet;
        rnet=1.0/rsum;
        netcur=(vsum/rnet);
        cout<<"\nType of circuit- purely resistive\n";
        cout<<"\nvoltage across all resistor same\n";
        cout<<"\nmagnitude of total impedance "<<rnet<<" ohms\n";
        cout<<"\nphase of total impedance- "<<0<<" degree\n";
        cout<<"\nmagnitude of total current "<<netcur<<" amps \n";
        cout<<"\nphase of total current- "<<0<<" degree \n";

         for(int e=1;e<=cr;e++)
        cout<<"\ncurrent through register number "<<e<<" is "<<vsum/rv[e]<<" amps\n";

        out<<"\nVOLTAGES\n";
            out<<"\nV"<<ppr<<"  "<<vsum<<"  "<<0.00<<"\n";
             for(int u=1;u<=cr;u++)
            out<<"\nR"<<u<<"  "<<vsum<<"  "<<0.00<<"\n";
            out<<"\nCURRENTS\n";
           out<<"\nV"<<ppr<<"  "<<netcur<<"  "<<0.000<<"\n";
             for(int g=1;g<=cr;g++)
            out<<"\nR"<<g<<"  "<<vsum/rv[g]<<"  "<<0.00<<"\n";


     }
     if((cr==0) && (cl==0) && (cc>=1))//for purely capacitive circuit
    { float vsum=0.0;
      float csum=0.0;
      float netcur=0.0;
      float fsum=0.0;

      vsum+=vv[++ppc];
       fsum+=fv[ppc];


      for(int d=1;d<=cc;d++)
        csum+=cv[d];
         float omega;
        omega=((2.0)*(3.14)*(fsum));
        float xc;
        xc=1/(omega*csum);
        netcur=vsum/xc;
        cout<<"\nType of circuit- purely capacitive\n";
        cout<<"\nvoltage across all capacitor same\n";
        cout<<"\nmagnitude of total impedance "<<xc<<" ohms\n";
        cout<<"\nphase of total impedance- "<<-90<<" degree\n";
        cout<<"\nmagnitude of total current "<<netcur<<" amps \n";
        cout<<"\nphase of total current and phase through each capacitor "<<90<<" degree \n";

         for(int e=1;e<=cc;e++)
       cout<<"\ncurrent through capacitor number "<<e<<" is "<<vsum*omega*cv[e]<<" amps\n";
       out<<"\nVOLTAGES\n";
            out<<"\nV"<<ppc<<"  "<<vsum<<"  "<<0.00<<"\n";
             for(int u=1;u<=cc;u++)
            out<<"\nC"<<u<<"  "<<vsum<<"  "<<0.00<<"\n";
            out<<"\nCURRENTS\n";
           out<<"\nV"<<ppc<<"  "<<netcur<<"  "<<0.000<<"\n";
             for(int g=1;g<=cc;g++)
            out<<"\nC"<<g<<"  "<<vsum*omega*cv[g]<<"  "<<90<<"\n";
     }
      if((cr==0) && (cc==0) && (cl>=1))//for purely inductive circuit
    { float vsum=0.0;
      float lsum=0.0;
      float netcur=0.0;
      float fsum=0.0;

       vsum+=vv[++ppi];
       fsum+=fv[ppi];


      for(int d=1;d<=cl;d++)
        lsum+=1.0/lv[d];
         float omega;
        omega=((2.0)*(3.14)*(fsum));
        float lnet;
        lnet=1/lsum;
        float xl;
        xl=omega*lnet;
        netcur=vsum/xl;
        cout<<"\nType of circuit- purely inductive\n";
        cout<<"\nvoltage across all inductor same\n";
        cout<<"\nmagnitude of total impedance "<<xl<<" ohms\n";
        cout<<"\nphase of total impedance- "<<90<<" degree\n";
        cout<<"\nmagnitude of total current "<<netcur<<" amps \n";
        cout<<"\nphase of total current and phase through each inducttor "<<-90<<" degree \n";

         for(int e=1;e<=cl;e++)
        cout<<"\ncurrent through inductor number "<<e<<" is "<<vsum/(omega*lv[e])<<" amps\n";
         out<<"\nVOLTAGES\n";
            out<<"\nV"<<ppi<<"  "<<vsum<<"  "<<0.00<<"\n";
             for(int u=1;u<=cl;u++)
            out<<"\nL"<<u<<"  "<<vsum<<"  "<<0.00<<"\n";
            out<<"\nCURRENTS\n";
           out<<"\nV"<<ppi<<"  "<<netcur<<"  "<<0.000<<"\n";
             for(int g=1;g<=cl;g++)
            out<<"\nL"<<g<<"  "<<vsum/(omega*lv[g])<<"  "<<-90<<"\n";

     }
     else if((cl>=1) && (cr>=1) && (cc==0))
     {
         double vsum=0.0;
      double lsum=0.0;
      double fsum=0.0;


      vsum+=vv[++prl];
      fsum+=fv[prl];

    double lnet=0.0;
    for(int g=1;g<=cl;g++)
        lsum+=1.0/lv[g];
        lnet=1.0/lsum;

    double omega;
    omega=((2.0)*(3.14)*(fsum));
    float xl;
    xl=omega*lnet;
    double rsum=0.0;
    for(int d=1;d<=cr;d++)
        rsum+=1.0/rv[d];
        double rnet;
        rnet=1.0/rsum;
        double xnet;
        double xinv;
        double q;
        q=((1/(rnet*rnet))+(1/(xl*xl)));
        xinv=sqrt(q);
        xnet=1/xinv;
        cout<<"\n net impedance = "<<xnet<<"\n";
        double phase,phaseinverse;
        phaseinverse=atan(rnet/xl)*180/3.1415;
        phase=-phaseinverse;
        double netcur;
        netcur=vsum/xnet;
        cout<<"\n magnitude current drawn through voltage source is "<<netcur<<"\n";
        cout<<"\n phase of total drawn current is "<<phase<<"\n";
        cout<<"\n phase of  current drawn by all registor "<<0<<"\n";
        for(int t=1;t<=cr;t++)
        cout<<"\nCurrent through register number "<<t<<" is "<<vsum/rv[t]<<" amps\n";
        cout<<"\n phase of  current drawn by all inductor "<<-90<<"\n";
        for(int n=1;n<=cl;n++)
        cout<<"\nCurrent through inductor number "<<n<<" is "<<vsum/(lv[n]*omega)<<" amps\n";

        out<<"\nVOLTAGES\n";
        out<<"\nV"<<prl<<"  "<<vsum<<"  "<<0.00<<"\n";
             for(int u=1;u<=cl;u++)
            out<<"\nL"<<u<<"  "<<vsum<<"  "<<0<<"\n";
            for(int e=1;e<=cr;e++)
            out<<"\nR"<<e<<"  "<<vsum<<"  "<<0<<"\n";

            out<<"\nCURRENTS\n";
           out<<"\nV"<<prl<<"  "<<netcur<<"  "<<phase<<"\n";
             for(int g=1;g<=cl;g++)
            out<<"\nL"<<g<<"  "<<vsum/(lv[g]*omega)<<"  "<<-90<<"\n";
             for(int f=1;f<=cr;f++)
            out<<"\nR"<<f<<"  "<<vsum/rv[f]<<"  "<<0<<"\n";

   }
   else if((cc>=1) && (cr>=1) && (cl==0))
     {
         double vsum=0.0;
      double csum=0.0;
      double fsum=0.0;

      vsum+=vv[++prc];
      fsum+=fv[prc];

    double cnet=0.0;
    for(int g=1;g<=cc;g++)
        cnet+=cv[g];


    double omega;
    omega=((2.0)*(3.14)*(fsum));
    float xc;
    xc=1/(omega*cnet);
    double rsum=0.0;
    for(int d=1;d<=cr;d++)
        rsum+=1/rv[d];
        double rnet;
        rnet=1.0/rsum;
        double xnet;
        double xinv;
        double q;
        q=((1/(rnet*rnet))+(1/(xc*xc)));
        xinv=sqrt(q);
        xnet=1/xinv;
        cout<<"\n net impedance = "<<xnet<<"\n";
        double phase,phaseinverse;
        phaseinverse=atan(rnet/xc)*180/3.1415;
        phase=-phaseinverse;
        double netcur;
        netcur=vsum/xnet;
        cout<<"\n magnitude current drawn through voltage source is "<<netcur<<"\n";
        cout<<"\n phase of total drawn current is "<<phaseinverse<<"\n";
        cout<<"\n phase of  current drawn by all registor "<<0<<"\n";
        for(int t=1;t<=cr;t++)
        cout<<"\nCurrent through register number "<<t<<" is "<<vsum/rv[t]<<" amps\n";
        cout<<"\n phase of  current drawn by all capacitor "<<90<<"\n";
        for(int n=1;n<=cc;n++)
        cout<<"\nCurrent through capacitor number "<<n<<" is "<<vsum*(cv[n]*omega)<<" amps\n";

        out<<"\nVOLTAGES\n";
        out<<"\nV"<<prc<<"  "<<vsum<<"  "<<0.00<<"\n";
             for(int u=1;u<=cc;u++)
            out<<"\nC"<<u<<"  "<<vsum<<"  "<<0<<"\n";
            for(int e=1;e<=cr;e++)
            out<<"\nR"<<e<<"  "<<vsum<<"  "<<0<<"\n";

            out<<"\nCURRENTS\n";
           out<<"\nV"<<prc<<"  "<<netcur<<"  "<<-phase<<"\n";
             for(int g=1;g<=cc;g++)
            out<<"\nC"<<g<<"  "<<vsum*cv[g]*omega<<"  "<<90<<"\n";
             for(int f=1;f<=cr;f++)
            out<<"\nR"<<f<<"  "<<vsum/rv[f]<<"  "<<0<<"\n";
     }
     else if((cc>=1) && (cl>=1) && (cr==0))
   {  double vsum=0.0;
      double csum=0.0;
      double fsum=0.0;

      vsum+=vv[++plc];
      fsum+=fv[plc];

    double cnet=0.0;
    for(int g=1;g<=cc;g++)
        csum+=cv[g];

    double omega;
    omega=((2.0)*(3.14)*(fsum));
     double xc;
    xc=1/(omega*csum);
     double lnet=0.0;
     double lsum=0.0;
    for(int h=1;h<=cl;h++)
        lsum+=1/lv[h];
        lnet=1/lsum;
    double xl;
    xl=omega*lnet;
    double xnet;
    double phase;
    out<<xl<<"  "<<xc;

    if(xl>xc)
    {xnet=xl*xc/(xl-xc);
    phase=-90;
    }
    else if(xc>xl)
       { xnet=xl*xc/(xc-xl);
       phase=90;
       }
  cout<<"\n net impedance "<<xnet<<"\n";
  cout<<"\n  phase of impedance "<<phase<<"\n";
        double netcur;
        netcur=vsum/xnet;
        cout<<"\n current drawn from source "<<netcur<<"\n";
        cout<<"\n phase of current drawn "<<-(phase)<<"\n";

         cout<<"\n phase of  current drawn by all capacitor "<<90<<"\n";
        for(int n=1;n<=cc;n++)
        cout<<"\nCurrent through capcitor number "<<n<<" is "<<vsum*cv[n]*omega<<" amps\n";
          cout<<"\n phase of  current drawn by all inductor "<<-90<<"\n";
        for(int m=1;m<=cl;m++)
        cout<<"\nCurrent through indutor number "<<m<<" is "<<vsum/(lv[m]*omega)<<" amps\n";

           out<<"\nVOLTAGES\n";
        out<<"\nV"<<plc<<"  "<<vsum<<"  "<<0.00<<"\n";
             for(int u=1;u<=cc;u++)
            out<<"\nC"<<u<<"  "<<vsum<<"  "<<0<<"\n";
            for(int e=1;e<=cl;e++)
            out<<"\nL"<<e<<"  "<<vsum<<"  "<<0<<"\n";

            out<<"\nCURRENTS\n";
           out<<"\nV"<<plc<<"  "<<netcur<<"  "<<-phase<<"\n";
             for(int g=1;g<=cc;g++)
            out<<"\nC"<<g<<"  "<<vsum*cv[g]*omega<<"  "<<90<<"\n";
             for(int f=1;f<=cl;f++)
            out<<"\nL"<<f<<"  "<<vsum/(lv[f]*omega)<<"  "<<-90<<"\n";
   }
    else if((cc>=1) && (cl>=1) && (cr>=1))
   {  double vsum=0.0;
      double csum=0.0;
      double fsum=0.0;


      vsum+=vv[++prlc];
      fsum+=fv[prlc];

    double cnet=0.0;
    for(int g=1;g<=cc;g++)
        cnet+=cv[g];
    double omega;
    omega=((2.0)*(3.14)*(fsum));
     double xc;
    xc=1.0/(omega*cnet);
     double lnet=0.0;
     double lsum=0.0;
    for(int h=1;h<=cl;h++)
        lsum+=1.0/lv[h];
        lnet=1.0/lsum;
        double rsum=0.0;
        double rnet=0.0;
    for(int x=1;x<=cr;x++)
        rsum+=1.0/rv[x];
        rnet=1.0/rsum;
    double xl,xinv;
    xl=omega*lnet;
    double xnet,iphase;
     double q;
        q=((1/(rnet*rnet))+((xl-xc)*(xl-xc)/(xl*xl*xc*xc)));
        xinv=sqrt(q);
        xnet=1.0/xinv;
        cout<<"\n net impedance = "<<xnet<<"\n";
        if(xl>xc)
        iphase=(atan((xl-xc)*(rnet)/(xl*xc))*180)/3.1415;
        else if(xc>xl)
     iphase=(atan((xc-xl)*(rnet)/(xc*xl))*(-1)*180)/3.1415;
       double netcur;
        netcur=vsum/xnet;
        double phase;
        phase=-(iphase);
        cout<<"\n current drawn from source "<<netcur<<"\n";
        cout<<"\n phase of current drawn "<<iphase<<"\n";
         cout<<"\n phase of  current through all capacitor "<<90<<"\n";
        for(int n=1;n<=cc;n++)
        cout<<"\nCurrent through capcitor number "<<n<<" is "<<vsum*cv[n]*omega<<" amps\n";
         cout<<"\n Current through all inductor "<<-90<<"\n";
        for(int o=1;o<=cl;o++)
        cout<<"\nCurrent through inductor number "<<o<<" is "<<vsum/(lv[o]*omega)<<" amps\n";
         cout<<"\n phase of  current through all resistor "<<0<<"\n";
        for(int q=1;q<=cr;q++)
        cout<<"\nCurrent through register number "<<q<<" is "<<vsum/rv[q]<<" amps\n";

      out<<"\nVOLTAGES\n";
        out<<"\nV"<<prlc<<"  "<<vsum<<"  "<<0.00<<"\n";
             for(int u=1;u<=cc;u++)
            out<<"\nC"<<u<<"  "<<vsum<<"  "<<0<<"\n";
            for(int e=1;e<=cl;e++)
            out<<"\nL"<<e<<"  "<<vsum<<"  "<<0<<"\n";
            for(int q=1;q<=cr;q++)
            out<<"\nR"<<q<<"  "<<vsum<<"  "<<0<<"\n";

            out<<"\nCURRENTS\n";
           out<<"\nV"<<prlc<<"  "<<netcur<<"  "<<iphase<<"\n";
             for(int g=1;g<=cc;g++)
            out<<"\nC"<<g<<"  "<<vsum*cv[g]*omega<<"  "<<90<<"\n";
             for(int f=1;f<=cl;f++)
            out<<"\nL"<<f<<"  "<<vsum/(lv[f]*omega)<<"  "<<-90<<"\n";
             for(int y=1;y<=cr;y++)
            out<<"\nR"<<y<<"  "<<vsum/rv[y]<<"  "<<0<<"\n";


   }



   }

}
   }
   else if(choice==2)
   {
       cout<<"\n Enter 1 For Elements in Sereies\n";
   cout<<"\n Enter 2 For Elements in Parallel\n";
   int ch;
   cout<<"\nEnter Your Choice\n";
   cin>>ch;
   if( ch==1)
   {
       for(int x=1;x<=cis;x++)
       {out<<"\n-------------------------------------------------------------------------------------------------------------\n";
         out<<"\nDATA FOR CURRENT SOURCE WITH AMPLITUDE "<<cuv[x]<<" AND FREQUENCY "<<frv[x]<<"\n";
        out<<"\n-------------------------------------------------------------------------------------------------------------\n";
        cout<<"\n-------------------------------------------------------------------------------------------------------------\n";
        cout<<"\ FREQUENCY= "<<frv[x]<<"hz\n";
        cout<<"\n-------------------------------------------------------------------------------------------------------------\n";
       if((cc==0) && (cl==0) && (cr>=1))//for purely resistive circuit
    { float vsum=0;
      float rsum=0;
      float netcur=0;

      netcur+=cuv[++sprc];
      for(int d=1;d<=cr;d++)
        rsum+=rv[d];
        vsum=netcur*rsum;
        cout<<"\nType of circuit- purely resistive\n";

        cout<<"\nmagnitude of total impedance "<<rsum<<" ohms\n";
         cout<<"\nphase of total impedance- "<<0<<" degree\n";
        cout<<"\nmagnitude of total current through current source   "<<netcur<<"  Amps\n";
          cout<<"\nphase of total current through voltage source- "<<0<<"  degree\n";
        cout<<"\ncurrent and voltage are in phase in purely resistive circuit\n";
         for(int e=1;e<=cr;e++)
           cout<<"\nVoltage drop across register number "<<e<<" is "<<netcur*rv[e]<<" volts\n";

            out<<"\nVOLTAGES\n";
            out<<"\nI"<<sprc<<"  "<<vsum<<"  "<<0.00<<"\n";
             for(int u=1;u<=cr;u++)
            out<<"\nR"<<u<<"  "<<netcur*rv[u]<<"  "<<0.00<<"\n";
            out<<"\nCURRENTS\n";
           out<<"\nI"<<sprc<<"  "<<netcur<<"  "<<0.000<<"\n";
             for(int g=1;g<=cr;g++)
            out<<"\nR"<<g<<"  "<<netcur<<"  "<<0.00<<"\n";


     }
     else if((cr==0) && (cl==0) && (cc>=1))//for purely capacitive circuit
     {float vsum=0.0;
      float csum=0.0;
      float netcur=0.0;
      float fsum=0.0;

        netcur+=cuv[++spcc];
         fsum+=frv[spcc];

        for(int d=1;d<=cc;d++)
        csum+=(1.0/(cv[d]));
        float cnet;
       cnet=1.0/csum ;
        float omega;
        omega=((2.0)*(3.14)*(fsum));
        float xc;
        xc=1.0/(omega*cnet);

        vsum=netcur*xc;
         cout<<"\n Type of circuit- purely capacitive\n";
        cout<<"\n magnitude of total voltage "<<vsum<<" volts \n";
         cout<<"\n phase of total voltage- "<<-90<<" degree \n";
        cout<<"\n magnitude of net impedance =  "<<xc<<"\n";
        cout<<"\n phase of total impedance = "<<-90<<" degree\n";
         cout<<"\n magnitude of total current through voltage source   "<<netcur<<"  Amps\n";
          cout<<"\n phase of total current through voltage source- "<<0<<"  degree\n";
          cout<<"\n current leads voltage by 90 degree in purely capacitive circuit\n";
           for(int e=1;e<=cc;e++)
            cout<<"\nVoltage drop across capacitor number "<<e<<" is "<<netcur/(omega*cv[e])<<" volts\n";
             out<<"\nVOLTAGES\n";
            out<<"\nI"<<spcc<<"  "<<vsum<<"  "<<-90<<"\n";
             for(int u=1;u<=cc;u++)
            out<<"\nC"<<u<<"  "<<netcur/(omega*cv[u])<<"  "<<-90<<"\n";
            out<<"\nCURRENTS\n";
           out<<"\nI"<<spcc<<"  "<<netcur<<"  "<<0<<"\n";
             for(int g=1;g<=cc;g++)
            out<<"\nC"<<g<<"  "<<netcur<<"  "<<0<<"\n";
       }
      else if((cc==0) && (cr==0) && (cl>=1))//for purely resistive circuit
    { float vsum=0.0;
      float lsum=0.0;
      float fsum=0.0;
      float netcur=0.0;


      netcur+=cuv[++spic];
      fsum+=frv[spic];

    float lnet=0.0;
    for(int g=0;g<=cl;g++)
        lnet+=lv[g];
    float omega;
    omega=((2.0)*(3.14)*(fsum));
    float xl;
    xl=omega*lnet;
    vsum=netcur*xl;
        cout<<"\nType of circuit- purely inductive\n";
        cout<<"\nmagnitude of total voltage "<<vsum<<" volts \n";
         cout<<"\nphase of total voltage- "<<90<<" degree \n";
        cout<<"\nmagnitude of total impedance "<<xl<<" ohms\n";
         cout<<"\nphase of total impedance- "<<90<<" degree\n";
        cout<<"\nmagnitude of total current through voltage source   "<<netcur<<"  Amps\n";
          cout<<"\nphase of total current through voltage source- "<<0<<"  degree\n";
           cout<<"\n voltage leads current by 90 degree in purely inductive circuit\n";
           for(int e=1;e<=cl;e++)
            cout<<"\nVoltage drop across inductor number "<<e<<" is "<<netcur*omega*lv[e]<<" volts\n";
             out<<"\nVOLTAGES\n";
            out<<"\nI"<<spic<<"  "<<vsum<<"  "<<90<<"\n";
             for(int u=1;u<=cl;u++)
            out<<"\nL"<<u<<"  "<<netcur*omega*lv[u]<<"  "<<90<<"\n";
            out<<"\nCURRENTS\n";
           out<<"\nI"<<spic<<"  "<<netcur<<"  "<<0<<"\n";
             for(int g=1;g<=cl;g++)
            out<<"\nL"<<g<<"  "<<netcur<<"  "<<0<<"\n";


     }
     else if((cl>=1) && (cr>=1) && (cc==0))
     {
         double vsum=0.0;
      double lsum=0.0;
      double fsum=0.0;
      double netcur=0.0;

      netcur+=cuv[++srlb];
      fsum+=frv[srlb];

    double lnet=0.0;
    for(int g=0;g<=cl;g++)
        lnet+=lv[g];
    double omega;
    omega=((2.0)*(3.14)*(fsum));
    float xl;
    xl=omega*lnet;
    double rsum=0.0;
    for(int d=1;d<=cr;d++)
        rsum+=rv[d];
        double xnet;
        double q;
        q=((rsum*rsum)+(xl*xl));
        xnet=sqrt(q);
        cout<<"\n net impedance = "<<xnet<<"\n";
        double phase;
        phase=atan(xl/rsum)*180/3.1415;

        vsum=netcur*xnet;
        cout<<"\n net current drawn through voltage source is "<<netcur<<"\n";
        double iphase;
        iphase=-(phase);
        cout<<"\n phase of drawn current is "<<0<<"\n";
        double vrp,vlp;
        vrp=iphase;
        vlp=90+iphase;
        cout<<"\n phase of  voltage drawn by all resistor"<<0<<"\n";
        for(int t=1;t<=cr;t++)
        cout<<"\nVoltage drop across register number "<<t<<" is "<<netcur*rv[t]<<" volts\n";
        cout<<"\n phase of  voltage drawn by all inductor "<<90<<"\n";
        for(int n=1;n<=cl;n++)
        cout<<"\nVoltage drop across inductor number "<<n<<" is "<<netcur*lv[n]*omega<<" volts\n";
        out<<"\nVOLTAGES\n";
            out<<"\nI"<<srlb<<"  "<<vsum<<"  "<<phase<<"\n";
             for(int u=1;u<=cl;u++)
            out<<"\nL"<<u<<"  "<<netcur*lv[u]*omega<<"  "<<90<<"\n";
            for(int e=1;e<=cr;e++)
            out<<"\nR"<<e<<"  "<<netcur*rv[e]<<"  "<<0<<"\n";

            out<<"\nCURRENTS\n";
           out<<"\nI"<<srlb<<"  "<<netcur<<"  "<<0<<"\n";
             for(int g=1;g<=cl;g++)
            out<<"\nL"<<g<<"  "<<netcur<<"  "<<0<<"\n";
             for(int f=1;f<=cr;f++)
            out<<"\nR"<<f<<"  "<<netcur<<"  "<<0<<"\n";
    }
      else if((cc>=1) && (cr>=1) && (cl==0))
     {
         double vsum=0.0;
      double csum=0.0;
      double fsum=0.0;
       double netcur=0.0;

      netcur+=cuv[++srcc];
      fsum+=frv[srcc];

    double cnet=0.0;
    for(int g=1;g<=cc;g++)
        csum+=1.0/cv[g];
        cnet=1.0/csum;
    double omega;
    omega=((2.0)*(3.14)*(fsum));
     double xc;
    xc=1.0/(omega*cnet);
    double rsum=0.0;
    for(int d=1;d<=cr;d++)
        rsum+=rv[d];
        double xnet;
        double q;
        q=((rsum*rsum)+(xc*xc));
        xnet=sqrt(q);
        cout<<"\n net impedance = "<<xnet<<"\n";
        double phase;
        phase=(atan(xc/rsum)*180*(-1))/3.1415;

        vsum=netcur*xnet;
        cout<<"\n net current drawn through voltage source is "<<netcur<<"\n";
        double iphase;
        iphase=-(phase);
        cout<<"\n phase of drawn current is "<<0<<"\n";
        double vrp,vcp;
        vrp=iphase;
        vcp=iphase-90;
        cout<<"\n phase of  voltage drawn by all resistor"<<0<<"\n";
        for(int t=1;t<=cr;t++)
        cout<<"\nVoltage drop across register number "<<t<<" is "<<netcur*rv[t]<<" volts\n";
        cout<<"\n phase of  voltage drawn by all capacitor "<<-90<<"\n";
        for(int n=1;n<=cc;n++)
        cout<<"\nVoltage drop across capcitor number "<<n<<" is "<<netcur/(cv[n]*omega)<<" volts\n";

             out<<"\nVOLTAGES\n";
            out<<"\nI"<<srcc<<"  "<<vsum<<"  "<<phase<<"\n";
             for(int u=1;u<=cc;u++)
            out<<"\nC"<<u<<"  "<<netcur/(cv[u]*omega)<<"  "<<-90<<"\n";
            for(int e=1;e<=cr;e++)
            out<<"\nR"<<e<<"  "<<netcur*rv[e]<<"  "<<0<<"\n";

            out<<"\nCURRENTS\n";
           out<<"\nI"<<srcc<<"  "<<netcur<<"  "<<0<<"\n";
             for(int g=1;g<=cc;g++)
            out<<"\nC"<<g<<"  "<<netcur<<"  "<<0<<"\n";
             for(int f=1;f<=cr;f++)
            out<<"\nR"<<f<<"  "<<netcur<<"  "<<0<<"\n";
     }
   else if((cc>=1) && (cl>=1) && (cr==0))
   {  double vsum=0.0;
      double csum=0.0;
      double fsum=0.0;
      double netcur=0.0;

      netcur+=cuv[++slcc];
      fsum+=frv[slcc];

    double cnet=0.0;
    for(int g=1;g<=cc;g++)
        csum+=1.0/cv[g];
        cnet=1.0/csum;
    double omega;
    omega=((2.0)*(3.14)*(fsum));
     double xc;
    xc=1/(omega*cnet);
     double lnet=0.0;
    for(int h=1;h<=cl;h++)
        lnet+=lv[h];
    double xl;
    xl=omega*lnet;
    double xnet,iphase;

    if(xl>xc)
    {xnet=xl-xc;
    iphase=90;
    }
    else if(xc>xl)
       { xnet=xc-xl;
       iphase=-90;
       }
  cout<<"\n net impedance "<<xnet<<"\n";

        vsum=netcur*xnet;
        cout<<"\n current drawn from source "<<netcur<<"\n";
        cout<<"\n phase of current drawn "<<0<<"\n";
        double vlp,vcp;
        vlp=-iphase+90;
        vcp=-iphase-90;
         cout<<"\n phase of  voltage drawn by all capacitor "<<-90<<"\n";
        for(int n=1;n<=cc;n++)
        cout<<"\nVoltage drop across capcitor number "<<n<<" is "<<netcur/(cv[n]*omega)<<" volts\n";
         cout<<"\n phase of  voltage drawn by all inductor "<<90<<"\n";
        for(int o=1;o<=cl;o++)
        cout<<"\nVoltage drop across inductor number "<<o<<" is "<<netcur*lv[o]*omega<<" volts\n";

    out<<"\nVOLTAGES\n";
            out<<"\nI"<<slcc<<"  "<<vsum<<"  "<<iphase<<"\n";
             for(int u=1;u<=cc;u++)
            out<<"\nC"<<u<<"  "<<netcur/(cv[u]*omega)<<"  "<<-90<<"\n";
            for(int e=1;e<=cl;e++)
            out<<"\nL"<<e<<"  "<<netcur*lv[e]*omega<<"  "<<90<<"\n";

            out<<"\nCURRENTS\n";
           out<<"\nI"<<slcc<<"  "<<netcur<<"  "<<0<<"\n";
             for(int g=1;g<=cc;g++)
            out<<"\nC"<<g<<"  "<<netcur<<"  "<<0<<"\n";
             for(int f=1;f<=cl;f++)
            out<<"\nL"<<f<<"  "<<netcur<<"  "<<0<<"\n";
   }
   else if((cc>=1) && (cl>=1) && (cr>=1))
   {  double vsum=0.0;
      double csum=0.0;
      double fsum=0.0;
      double netcur=0.0;
      netcur+=cuv[++srlcc];
      fsum+=frv[srlcc];

    double cnet=0.0;
    for(int g=1;g<=cc;g++)
        csum+=1.0/cv[g];
        cnet=1.0/csum;
    double omega;
    omega=((2.0)*(3.14)*(fsum));
     double xc;
    xc=1.0/(omega*cnet);
     double lnet=0.0;
    for(int h=1;h<=cl;h++)
        lnet+=lv[h];
        double rsum=0.0;
    for(int x=1;x<=cr;x++)
        rsum+=rv[x];
    double xl;
    xl=omega*lnet;
    double xnet,iphase;
     double q;
        q=((rsum*rsum)+((xl-xc)*(xl-xc)));
        xnet=sqrt(q);
        cout<<"\n net impedance = "<<xnet<<"\n";
        if(xl>xc)
        iphase=atan((xl-xc)/rsum)*180/3.1415;
        else if(xc>xl)
     iphase=(atan((xc-xl)/rsum)*(-1)*180)/3.1415;

        vsum=netcur*xnet;
        double phase;
        phase=-(iphase);
        cout<<"\n current drawn from source "<<netcur<<"\n";
        cout<<"\n phase of current drawn "<<phase<<"\n";
        double vlp,vcp,vrp;
        vrp=phase;
        vlp=phase+90;
        vcp=phase-90;
         cout<<"\n phase of  voltage drawn by all capacitor "<<-90<<"\n";
        for(int n=1;n<=cc;n++)
        cout<<"\nVoltage drop across capcitor number "<<n<<" is "<<netcur/(cv[n]*omega)<<" volts\n";
         cout<<"\n phase of  voltage drawn by all inductor "<<90<<"\n";
        for(int o=1;o<=cl;o++)
        cout<<"\nVoltage drop across inductor number "<<o<<" is "<<netcur*lv[o]*omega<<" volts\n";
         cout<<"\n phase of  voltage drawn by all resistor "<<0<<"\n";
        for(int q=1;q<=cr;q++)
        cout<<"\nVoltage drop across register number "<<q<<" is "<<netcur*rv[q]<<" volts\n";

         out<<"\nVOLTAGES\n";
        out<<"\nI"<<srlcc<<"  "<<vsum<<"  "<<iphase<<"\n";
             for(int u=1;u<=cc;u++)
            out<<"\nC"<<u<<"  "<<netcur/(cv[u]*omega)<<"  "<<-90<<"\n";
            for(int e=1;e<=cl;e++)
            out<<"\nL"<<e<<"  "<<netcur*lv[e]*omega<<"  "<<90<<"\n";
            for(int t=1;t<=cr;t++)
            out<<"\nR"<<t<<"  "<<netcur*rv[t]<<"  "<<0<<"\n";

            out<<"\nCURRENTS\n";
           out<<"\nI"<<srlcc<<"  "<<netcur<<"  "<<0<<"\n";
             for(int g=1;g<=cc;g++)
            out<<"\nC"<<g<<"  "<<netcur<<"  "<<0<<"\n";
             for(int f=1;f<=cl;f++)
            out<<"\nL"<<f<<"  "<<netcur<<"  "<<0<<"\n";
             for(int y=1;y<=cr;y++)
            out<<"\nR"<<y<<"  "<<netcur<<"  "<<0<<"\n";

   }
   }
   }
   if(ch==2 )
   {
       for(int y=1;y<=cis;y++)
       { out<<"\n-------------------------------------------------------------------------------------------------------------\n";
           out<<"\nDATA FOR CURRENT SOURCE WITH AMPLITUDE "<<cuv[y]<<" AND FREQUENCY "<<frv[y]<<"\n";
        out<<"\n-------------------------------------------------------------------------------------------------------------\n";
        cout<<"\n-------------------------------------------------------------------------------------------------------------\n";
        cout<<"\nDATA FOR CURRENT SOURCE WITH AMPLITUDE "<<cuv[y]<<" AND FREQUENCY "<<frv[y]<<"\n";
        cout<<"\n-------------------------------------------------------------------------------------------------------------\n";
        if((cc==0) && (cl==0) && (cr>=1))//for purely resistive circuit
    { float vsum=0.0;
      float rsum=0.0;
      float netcur=0.0;

      netcur+=cuv[++pprc];
      for(int d=1;d<=cr;d++)
        rsum+=1.0/rv[d];
        float rnet;
        rnet=1.0/rsum;
        vsum=netcur*rnet;
        cout<<"\nType of circuit- purely resistive\n";
        cout<<"\nvoltage across all resistor same\n";
        cout<<"\nmagnitude of total impedance "<<rnet<<" ohms\n";
        cout<<"\nphase of total impedance- "<<0<<" degree\n";
        cout<<"\nmagnitude of total current "<<netcur<<" amps \n";
        cout<<"\nphase of total current- "<<0<<" degree \n";

         for(int e=1;e<=cr;e++)
        cout<<"\ncurrent through register number "<<e<<" is "<<vsum/rv[e]<<" amps\n";

        out<<"\nVOLTAGES\n";
            out<<"\nI"<<pprc<<"  "<<vsum<<"  "<<0.00<<"\n";
             for(int u=1;u<=cr;u++)
            out<<"\nR"<<u<<"  "<<vsum<<"  "<<0.00<<"\n";
            out<<"\nCURRENTS\n";
           out<<"\nI"<<pprc<<"  "<<netcur<<"  "<<0.000<<"\n";
             for(int g=1;g<=cr;g++)
            out<<"\nR"<<g<<"  "<<vsum/rv[g]<<"  "<<0.00<<"\n";


     }
     if((cr==0) && (cl==0) && (cc>=1))//for purely capacitive circuit
    { float vsum=0.0;
      float csum=0.0;
      float netcur=0.0;
      float fsum=0.0;

      netcur+=cuv[++ppcc];
       fsum+=frv[ppcc];


      for(int d=1;d<=cc;d++)
        csum+=cv[d];
         float omega;
        omega=((2.0)*(3.14)*(fsum));
        float xc;
        xc=1/(omega*csum);
        vsum=netcur*xc;
        cout<<"\nType of circuit- purely capacitive\n";
        cout<<"\nvoltage across all capacitor same\n";
        cout<<"\nmagnitude of total impedance "<<xc<<" ohms\n";
        cout<<"\nphase of total impedance- "<<-90<<" degree\n";
        cout<<"\nmagnitude of total current "<<netcur<<" amps \n";
        cout<<"\nphase of total current and phase through each capacitor "<<0<<" degree \n";

         for(int e=1;e<=cc;e++)
       cout<<"\ncurrent through capacitor number "<<e<<" is "<<vsum*omega*cv[e]<<" amps\n";
       out<<"\nVOLTAGES\n";
            out<<"\nI"<<ppcc<<"  "<<vsum<<"  "<<-90<<"\n";
             for(int u=1;u<=cc;u++)
            out<<"\nC"<<u<<"  "<<vsum<<"  "<<-90<<"\n";
            out<<"\nCURRENTS\n";
           out<<"\nI"<<ppcc<<"  "<<netcur<<"  "<<0<<"\n";
             for(int g=1;g<=cc;g++)
            out<<"\nC"<<g<<"  "<<vsum*omega*cv[g]<<"  "<<0<<"\n";
     }
      if((cr==0) && (cc==0) && (cl>=1))//for purely inductive circuit
    { float vsum=0.0;
      float lsum=0.0;
      float netcur=0.0;
      float fsum=0.0;

       netcur+=cuv[++ppic];
       fsum+=frv[ppic];


      for(int d=1;d<=cl;d++)
        lsum+=1.0/lv[d];
         float omega;
        omega=((2.0)*(3.14)*(fsum));
        float lnet;
        lnet=1/lsum;
        float xl;
        xl=omega*lnet;
        vsum=netcur*xl;
        cout<<"\nType of circuit- purely inductive\n";
        cout<<"\nvoltage across all inductor same\n";
        cout<<"\nmagnitude of total impedance "<<xl<<" ohms\n";
        cout<<"\nphase of total impedance- "<<90<<" degree\n";
        cout<<"\nmagnitude of total current "<<netcur<<" amps \n";
        cout<<"\nphase of total current and phase through each inducttor "<<0<<" degree \n";

         for(int e=1;e<=cl;e++)
        cout<<"\ncurrent through inductor number "<<e<<" is "<<vsum/(omega*lv[e])<<" amps\n";
         out<<"\nVOLTAGES\n";
            out<<"\nI"<<ppic<<"  "<<vsum<<"  "<<90<<"\n";
             for(int u=1;u<=cl;u++)
            out<<"\nL"<<u<<"  "<<vsum<<"  "<<90<<"\n";
            out<<"\nCURRENTS\n";
           out<<"\nI"<<ppic<<"  "<<netcur<<"  "<<0.000<<"\n";
             for(int g=1;g<=cl;g++)
            out<<"\nL"<<g<<"  "<<vsum/(omega*lv[g])<<"  "<<0<<"\n";

     }
     else if((cl>=1) && (cr>=1) && (cc==0))
     {
         double vsum=0.0;
      double lsum=0.0;
      double fsum=0.0;
      double netcur=0.0;
      netcur+=cuv[++prlb];
      fsum+=frv[prlb];

    double lnet=0.0;
    for(int g=1;g<=cl;g++)
        lsum+=1.0/lv[g];
        lnet=1.0/lsum;

    double omega;
    omega=((2.0)*(3.14)*(fsum));
    float xl;
    xl=omega*lnet;
    double rsum=0.0;
    for(int d=1;d<=cr;d++)
        rsum+=1.0/rv[d];
        double rnet;
        rnet=1.0/rsum;
        double xnet;
        double xinv;
        double q;
        q=((1/(rnet*rnet))+(1/(xl*xl)));
        xinv=sqrt(q);
        xnet=1/xinv;
        cout<<"\n net impedance = "<<xnet<<"\n";
        double phase,phaseinverse;
        phaseinverse=atan(rnet/xl)*180/3.1415;
        phase=-phaseinverse;

        vsum=netcur*xnet;
        cout<<"\n magnitude current drawn through voltage source is "<<netcur<<"\n";
        cout<<"\n phase of total drawn current is "<<0<<"\n";
        cout<<"\n phase of  current drawn by all registor "<<0<<"\n";
        for(int t=1;t<=cr;t++)
        cout<<"\nCurrent through register number "<<t<<" is "<<vsum/rv[t]<<" amps\n";
        cout<<"\n phase of  current drawn by all inductor "<<0<<"\n";
        for(int n=1;n<=cl;n++)
        cout<<"\nCurrent through inductor number "<<n<<" is "<<vsum/(lv[n]*omega)<<" amps\n";

        out<<"\nVOLTAGES\n";
        out<<"\nI"<<prlb<<"  "<<vsum<<"  "<<phaseinverse<<"\n";
             for(int u=1;u<=cl;u++)
            out<<"\nL"<<u<<"  "<<vsum<<"  "<<phaseinverse<<"\n";
            for(int e=1;e<=cr;e++)
            out<<"\nR"<<e<<"  "<<vsum<<"  "<<phaseinverse<<"\n";

            out<<"\nCURRENTS\n";
           out<<"\nI"<<prlb<<"  "<<netcur<<"  "<<0<<"\n";
             for(int g=1;g<=cl;g++)
            out<<"\nL"<<g<<"  "<<vsum/(lv[g]*omega)<<"  "<<phaseinverse-90<<"\n";
             for(int f=1;f<=cr;f++)
            out<<"\nR"<<f<<"  "<<vsum/rv[f]<<"  "<<phaseinverse<<"\n";

   }
   else if((cc>=1) && (cr>=1) && (cl==0))
     {
         double vsum=0.0;
      double csum=0.0;
      double fsum=0.0;
      double netcur=0.0;

      netcur+=cuv[++prcc];
      fsum+=frv[prcc];

    double cnet=0.0;
    for(int g=1;g<=cc;g++)
        cnet+=cv[g];


    double omega;
    omega=((2.0)*(3.14)*(fsum));
    float xc;
    xc=1.0/(omega*cnet);
    double rsum=0.0;
    for(int d=1;d<=cr;d++)
        rsum+=1.0/rv[d];
        double rnet;
        rnet=1.0/rsum;
        double xnet;
        double xinv;
        double q;
        q=((1.0/(rnet*rnet))+(1/(xc*xc)));
        xinv=sqrt(q);
        xnet=1.0/xinv;
        cout<<"\n net impedance = "<<xnet<<"\n";
        double phase,phaseinverse;
        phaseinverse=atan(rnet/xc)*180/3.1415;
        phase=-phaseinverse;

        vsum=netcur*xnet;
        cout<<"\n magnitude current drawn through voltage source is "<<netcur<<"\n";
        cout<<"\n phase of total drawn current is "<<0<<"\n";
        cout<<"\n phase of  current drawn by all registor "<<phaseinverse<<"\n";
        for(int t=1;t<=cr;t++)
        cout<<"\nCurrent through register number "<<t<<" is "<<vsum/rv[t]<<" amps\n";
        cout<<"\n phase of  current drawn by all capacitor "<<phaseinverse+90<<"\n";
        for(int n=1;n<=cc;n++)
        cout<<"\nCurrent through capacitor number "<<n<<" is "<<vsum*(cv[n]*omega)<<" amps\n";

        out<<"\nVOLTAGES\n";
        out<<"\nI"<<prcc<<"  "<<vsum<<"  "<<phase<<"\n";
             for(int u=1;u<=cc;u++)
            out<<"\nC"<<u<<"  "<<vsum<<"  "<<phase<<"\n";
            for(int e=1;e<=cr;e++)
            out<<"\nR"<<e<<"  "<<vsum<<"  "<<phase<<"\n";

            out<<"\nCURRENTS\n";
           out<<"\nI"<<prcc<<"  "<<netcur<<"  "<<0<<"\n";
             for(int g=1;g<=cc;g++)
            out<<"\nC"<<g<<"  "<<vsum*cv[g]*omega<<"  "<<90+phase<<"\n";
             for(int f=1;f<=cr;f++)
            out<<"\nR"<<f<<"  "<<vsum/rv[f]<<"  "<<phase<<"\n";
     }
     else if((cc>=1) && (cl>=1) && (cr==0))
   {  double vsum=0.0;
      double csum=0.0;
      double fsum=0.0;
      double netcur=0.0;

      netcur+=cuv[++plcc];
      fsum+=frv[plcc];

    double cnet=0.0;
    for(int g=1;g<=cc;g++)
        csum+=cv[g];

    double omega;
    omega=((2.0)*(3.14)*(fsum));
     double xc;
    xc=1.0/(omega*csum);
     double lnet=0.0;
     double lsum=0.0;
    for(int h=1;h<=cl;h++)
        lsum+=1.0/lv[h];
        lnet=1.0/lsum;
    double xl;
    xl=omega*lnet;
    double xnet;
    double phase;
    out<<xl<<"  "<<xc;

    if(xl>xc)
    {xnet=xl*xc/(xl-xc);
    phase=-90;
    }
    else if(xc>xl)
       { xnet=xl*xc/(xc-xl);
       phase=90;
       }
  cout<<"\n net impedance "<<xnet<<"\n";
  cout<<"\n  phase of impedance "<<phase<<"\n";

        vsum=netcur*xnet;
        cout<<"\n current drawn from source "<<netcur<<"\n";
        cout<<"\n phase of current drawn "<<0<<"\n";

         cout<<"\n phase of  current drawn by all capacitor "<<90+phase<<"\n";
        for(int n=1;n<=cc;n++)
        cout<<"\nCurrent through capcitor number "<<n<<" is "<<vsum*cv[n]*omega<<" amps\n";
          cout<<"\n phase of  current drawn by all inductor "<<phase-90<<"\n";
        for(int m=1;m<=cl;m++)
        cout<<"\nCurrent through indutor number "<<m<<" is "<<vsum/(lv[m]*omega)<<" amps\n";

           out<<"\nVOLTAGES\n";
        out<<"\nI"<<plcc<<"  "<<vsum<<"  "<<phase<<"\n";
             for(int u=1;u<=cc;u++)
            out<<"\nC"<<u<<"  "<<vsum<<"  "<<phase<<"\n";
            for(int e=1;e<=cl;e++)
            out<<"\nL"<<e<<"  "<<vsum<<"  "<<phase<<"\n";

            out<<"\nCURRENTS\n";
           out<<"\nI"<<plcc<<"  "<<netcur<<"  "<<0<<"\n";
             for(int g=1;g<=cc;g++)
            out<<"\nC"<<g<<"  "<<vsum*cv[g]*omega<<"  "<<phase+90<<"\n";
             for(int f=1;f<=cl;f++)
            out<<"\nL"<<f<<"  "<<vsum/(lv[f]*omega)<<"  "<<-90+phase<<"\n";
   }
    else if((cc>=1) && (cl>=1) && (cr>=1))
   {  double vsum=0.0;
      double csum=0.0;
      double fsum=0.0;
    double netcur=0.0;

      netcur+=cuv[++prlcc];
      fsum+=frv[prlcc];

    double cnet=0.0;
    for(int g=1;g<=cc;g++)
        cnet+=cv[g];
    double omega;
    omega=((2.0)*(3.14)*(fsum));
     double xc;
    xc=1.0/(omega*cnet);
     double lnet=0.0;
     double lsum=0.0;
    for(int h=1;h<=cl;h++)
        lsum+=1.0/lv[h];
        lnet=1.0/lsum;
        double rsum=0.0;
        double rnet=0.0;
    for(int x=1;x<=cr;x++)
        rsum+=1.0/rv[x];
        rnet=1.0/rsum;
    double xl,xinv;
    xl=omega*lnet;
    double xnet,iphase;
     double q;
        q=((1/(rnet*rnet))+((xl-xc)*(xl-xc)/(xl*xl*xc*xc)));
        xinv=sqrt(q);
        xnet=1.0/xinv;
        cout<<"\n net impedance = "<<xnet<<"\n";
        if(xl>xc)
        iphase=(atan((xl-xc)*(rnet)/(xl*xc))*180)/3.1415;
        else if(xc>xl)
     iphase=(atan((xc-xl)*(rnet)/(xc*xl))*(-1)*180)/3.1415;

        vsum=netcur*xnet;
        double phase;
        phase=-(iphase);
        cout<<"\n current drawn from source "<<netcur<<"\n";
        cout<<"\n phase of current drawn "<<0<<"\n";
         cout<<"\n phase of  current through all capacitor "<<90+phase<<"\n";
        for(int n=1;n<=cc;n++)
        cout<<"\nCurrent through capcitor number "<<n<<" is "<<vsum*cv[n]*omega<<" amps\n";
         cout<<"\n Current through all inductor "<<-90+phase<<"\n";
        for(int o=1;o<=cl;o++)
        cout<<"\nCurrent through inductor number "<<o<<" is "<<vsum/(lv[o]*omega)<<" amps\n";
         cout<<"\n phase of  current through all resistor "<<phase<<"\n";
        for(int q=1;q<=cr;q++)
        cout<<"\nCurrent through register number "<<q<<" is "<<vsum/rv[q]<<" amps\n";

      out<<"\nVOLTAGES\n";
        out<<"\nI"<<prlcc<<"  "<<vsum<<"  "<<phase<<"\n";
             for(int u=1;u<=cc;u++)
            out<<"\nC"<<u<<"  "<<vsum<<"  "<<phase<<"\n";
            for(int e=1;e<=cl;e++)
            out<<"\nL"<<e<<"  "<<vsum<<"  "<<phase<<"\n";
            for(int q=1;q<=cr;q++)
            out<<"\nR"<<q<<"  "<<vsum<<"  "<<phase<<"\n";

            out<<"\nCURRENTS\n";
           out<<"\nI"<<prlcc<<"  "<<netcur<<"  "<<0<<"\n";
             for(int g=1;g<=cc;g++)
            out<<"\nC"<<g<<"  "<<vsum*cv[g]*omega<<"  "<<90+phase<<"\n";
             for(int f=1;f<=cl;f++)
            out<<"\nL"<<f<<"  "<<vsum/(lv[f]*omega)<<"  "<<-90+phase<<"\n";
             for(int y=1;y<=cr;y++)
            out<<"\nR"<<y<<"  "<<vsum/rv[y]<<"  "<<phase<<"\n";


   }



   }

}
   }
}






