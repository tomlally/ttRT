#include <cstdio>
#include <cmath>
#define R return
#define Q operator
using F=float;using I=int;F r(){R rand()/(F)RAND_MAX;}I p(F v){R pow(v<0?0:v>1?1:v,1/2.2)
*255+.5;}struct V{F x,y,z;V Q*(const V&v){R{v.x*x,v.y*y,v.z*z};}V Q+(const V&v){R{v.x+x,v
.y+y,v.z+z};}V Q-(const V&v){R{x-v.x,y-v.y,z-v.z};}V Q*(F f){R{x*f,y*f,z*f};}V Q/(F f){R{
x/f,y/f,z/f};}V Q!(){R*this/~*this;}V Q%(V&v){R{y*v.z-z*v.y,z*v.x-x*v.z,x*v.y-y*v.x};}F d
(const V&v){R v.x*x+v.y*y+v.z*z;}F Q~(){R sqrt(d(*this));}};struct O{V o,c;F r,f,e;O(V o,
F r,V c={1,1,1},F f=0,F e=0):o(o),r(r),c(c),f(f),e(e){}I t(V p,V d,V&h,V&n){V z=p-o;F a=d
.d(z),q=a*a+r*r-z.d(z),u=sqrt(q);R q<0?0:(h=p+d*std::min(u-a,-u-a),n=!(h-o),1);}}o[]={{{-
1,-4,-1},1,{1,1,1},1},{{1,-4,-1},1},{{0,0,127},125},{{0,0,-127},125},{{-127,0,0},125,{1,0
,0}},{{127,0,0},125,{0,1,0}},{{0,-127,0},121},{{0,-2,2},.6f,{0.8,0.75,0.45},0,1.2}};V t(V
p,V d,I i=0,O*f=0){if(i>4)R{};O*x=0;V l,m,h,n;for(O&o:o)if(&o-f&&o.t(p,!d,l,m))if(!x||~(l
-p)<~(h-p))x=&o,h=l,n=m;if(x){F a=6*r(),b=r(),c=sqrt(b);V u=!((fabs(n.x)>.1?V{0,1,0}:V{1,
0,0})%n),r=!(u*cos(a)*c+n%u*sin(a)*c+n*sqrt(1-b));R(x->c*x->e)+(x->c*t(h,r,i+1,x)*r.d(n)*
(1-x->f)*2)+(x->f>.01?(x->c*t(h,d-n*2*n.d(d),i+1,x)):V{})*x->f;}R{};}I main(){puts("P3 5"
"12 512 255");for(I y=512;y--;)for(I x=512;x--;){V c={};for(I s=256;s--;)c=c+t({},V{(x+r(
)-256),-256,(y+r()-256)}/256)/256;printf("%d %d %d ",p(c.x),p(c.y),p(c.z));}}

