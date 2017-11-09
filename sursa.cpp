#include<iostream>
#include<fstream>
using namespace std;

struct nod
{
	int inf;
	nod *urm;
};

void creare(nod *&p)
{
	ifstream f("in.txt");
	int x;
	nod *q,*u;
	while(f>>x)
		if(p==NULL)
		{
			p=new nod;
			p->inf=x;
			p->urm=NULL;
			u=p;
		}
		else
		{
			q=new nod;
			q->inf=x;
			u->urm=q;
			u=q;
		}
	u->urm=p;
}

void afisare(nod *p)
{
	nod *q=p;
	do
	{
		cout<<q->inf<<" ";
		q=q->urm;
	}while(q!=p);
	cout<<endl;
}

int main()
{
	nod *p;
	p=NULL;
	creare(p);
	afisare(p);
	return 0;
}
