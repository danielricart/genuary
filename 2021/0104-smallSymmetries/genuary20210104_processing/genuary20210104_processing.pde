int posY;
int sqW;
int sqH;

void setup() {
  size(1280,720);
  posY = height/2;
  sqW = width/2;
  sqH = height/2;

}


void draw() {
myrect(0,posY, sqW, sqH);
if (frameCount % 2 ==0) {
  posY--;
  sqW--;
  sqH--;
}
}

void myrect(int startx, int starty, int sizex, int sizey) {
  if (sizex ==0 || sizey == 0)
    return;
  fill(startx%256,sizex%256,sizey%256);
  rect(startx, starty, sizex, sizey, 16,7,8,9);
  rect(startx, starty-sizey, sizex, sizey, 8,9,7,16);
  myrect(startx+sizex, starty, sizex/2, sizey/2);  
}
 