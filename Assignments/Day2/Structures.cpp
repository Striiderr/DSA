#include<iostream>
using namespace std;

struct s10{   
   int y;
   struct s10 *z;
};
struct s9{   
   struct s9 *w;
   int x;
};

struct s8{   
	struct s9 *t;
   int u;
   struct s10 *v;
};   
struct s7{   
   int n;
   char o;
   struct s8 *p;
};   
struct s6{   
  struct s7 *q;
   int r;
   struct s6 *s;
};   
struct s5{   
   int l;
   struct s6 *m;
};   
struct s4{
struct s7 *j;
struct s5 *k;
};
struct s3{   
  struct s4 *g;
   struct s3 *h;
   struct s5 *i;
}; 
struct s2{   
   char e;
   struct s3 *f;
};  
struct s1{   
   
   struct s1 *a;
   int b;
   struct s2 *c;
   struct s1 *d;
}; 

int main(){
	int n,r,u;
struct s1 *P;
P=new(s1);
P->c=new(s2);
P->c->f=new(s3);
P->c->f->g=new(s4);
P->c->f->g->j=new(s7);
cin>>P->c->f->g->j->n;
n=P->c->f->g->j->n;
P->c->f->i=new(s5);
P->c->f->i->m=new(s6);
cin>>P->c->f->i->m->r;
r=P->c->f->i->m->r;
P->c->f->g->j->p=new(s8);
cin>>P->c->f->g->j->p->u;
u=P->c->f->g->j->p->u;
P->c->f->g->j->p->t=new(s9);
P->c->f->g->j->p->v=new(s10);
if(u%2==0){
 P->c->f->g->j->p->t->x=n;
 P->c->f->g->j->p->v->y=r;
}
else{
P->c->f->g->j->p->t->x=r;
P->c->f->g->j->p->v->y=n;

}
cout<<P->c->f->g->j->n<<" ";
cout<<P->c->f->i->m->r<<" ";
cout<<P->c->f->g->j->p->u<<" ";
cout<<P->c->f->g->j->p->t->x<<" ";
cout<<P->c->f->g->j->p->v->y<<" ";
cout<<endl;

}