void setup() {
  size(640,480);
}

void draw() {
myrect(0,height/2, width/2, height/2);
}

void myrect(int startx, int starty, int sizex, int sizey) {
  if (sizex ==0 || sizey == 0)
    return;
  fill(startx%256,sizex%256,sizey%256);
  rect(startx, starty, sizex, sizey, 16,7,8,9);
  rect(startx, starty-sizey, sizex, sizey, 8,9,7,16);
  myrect(startx+sizex, starty, sizex/2, sizey/2);  
}
 