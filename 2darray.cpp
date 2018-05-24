#include <iostream>
using namespace std;
class matrix{
	int **p;
	int rows,cols;
	public:
	matrix(int x,int y);
	void read_element(int i,int j,int value)
	{
		p[i][j]=value;
	}
	int disp_element(int i,int j)
	{
		return p[i][j];
	}
};
matrix::matrix(int x,int y)
{
	int i;
	rows=x;
	cols=y;
	p=new int*[rows];
	for(i=0;i<rows;i++)
		p[i]=new int[cols];
}
int main()
{
	int r,c;
	cout<<"enter size of matrix";
	cin>>r>>c;
	matrix m1(r,c);
	cout<<"enter the elements of matrix row by row"<<endl;
	int i,j,value;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>value;
			m1.read_element(i,j,value);
		}
	}
	cout<<endl;
	cout<<m1.disp_element(1,1);
	return 0;
}
