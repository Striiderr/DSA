#include <bits/stdc++.h>
using namespace std;

class s10
{
public:
  int y;
  s10 *z;
};
class s9
{
public:
  s9 *w;
  int x;
};
class s8
{
public:
  s9 *t;
  int u;
  s10 *v;
};
class s7
{
public:
  int n;
  char o;
  s8 *p;
};
class s6
{
public:
  s7 *q;
  int r;
  s6 *s;
};
class s5
{
public:
  int l;
  s6 *m;
};
class s4
{
public:
  s7 *j;
  s5 *k;
};
class s3
{
public:
  s4 *g;
  s5 *i;
  s3 *h;
};
class s2
{
public:
  char e;
  s3 *f;
};
class s1
{
public:
  s1 *a;
  int b;
  s2 *c;
  s1 *d;
};

int main()
{
  int n, r, u;
  cin >> n >> r >> u;
  s1 *P;
  P = new (s1);
  P->a = new (s1);
  P->c = new (s2);
  P->d = new (s1);
  P->c->f = new (s3);
  P->c->f->i = new (s5);
  P->c->f->g = new (s4);
  P->c->f->h = new (s3);
  P->c->f->g->j = new (s7);
  P->c->f->g->j->n = n;
  P->c->f->g->k = new (s5);
  P->c->f->i->m = new (s6);
  P->c->f->g->k->m=new (s6);
  P->c->f->g->k->m->s = new (s6);
  P->c->f->g->j->p = new (s8);
  P->c->f->g->j->p->t=new(s9);
  P->c->f->g->j->p->v=new(s10);
  P->c->f->g->j->p->t->w=new(s9);
  P->c->f->g->j->p->v->z=new(s10);
  P->c->f->g->j->p->u = u;
  P->c->f->g->k->m->q = new (s7);
  P->c->f->i->m->r = r;
  P->c->f->g->k->m->q->p=new (s8);
  P->c->f->g->k->m->q->p->t = new (s9);
  P->c->f->g->k->m->q->p->t->w = new (s9);
  P->c->f->g->k->m->q->p->v = new (s10);
  P->c->f->g->k->m->q->p->v->z = new (s10);

  if (u % 2 == 0)
  {
    P->c->f->g->j->p->t->x = n;
    P->c->f->g->j->p->v->y = r;
  }
  else
  {
    P->c->f->g->j->p->t->x = r;
    P->c->f->g->j->p->v->y = n;
  }
   cout << P->c->f->g->j->n << " ";
   cout << P->c->f->i->m->r << " ";
   cout << P->c->f->g->j->p->u << " ";
   cout << P->c->f->g->j->p->t->x << " ";
   cout << P->c->f->g->j->p->v->y << " " << endl;
  return 0;
}