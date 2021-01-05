int pY=360;
int sW=640;
void setup(){
size(1280,720);}
void draw(){
mr(0,pY, sW, pY);
pY--;
sW--;
}
void mr(int sx,int sy,int zx,int zy){
if (zx==0||zy==0) return;
fill(sx,zx,zy);
rect(sx, sy, zx, zy, 6,7,8,9);
rect(sx, sy-zy, zx, zy, 8,9,7,6);
mr(sx+zx, sy, zx/2, zy/2);
}