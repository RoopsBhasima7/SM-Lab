#include <iostream>
#include <fstream>

using namespace std;  

int main()
{
	float v,r1,r2,r3,i1,i2,i3,i,r,eqi;
	int n;
	FILE *fp;
	fp=fopen("D:/kirch.xls","w+");
	cout<<endl<<"Input three resistance values:";
	cin>>r1>>r2>>r3;
	cout<<endl<<"Input Voltage:";
	cin>>v;
	fprintf(fp,"i\ti1\ti2\ti3\n");
	for(n=0;n<5;n++)
	{
		i1=v/r1;
		i2=v/r2;
		i3=v/r3;
		i=i1+i2+i3;
		r=(r1*r2*r3)/((r2*r3)+(r1*r3)+(r1*r2));
		eqi=v/r;
		cout<<endl<<"i:"<<i<<"\t1:"<<i1<<"\t2:"<<i2<<"\ti3:"<<i3<<"\teqi:"<<eqi;
		fprintf(fp,"%f\t%f\t%f\t%f\n",i,i1,i2,i3);
		v++;
	}
	fclose(fp);
}
