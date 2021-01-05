void setup() {
  size(640,480);
}

void draw() {
myrect(0,height/2, width/2, height/2);

}

void myrect(int startx, int starty, int sizex, int sizey) {
  //rect(a, b, c, d, tl, tr, br, bl)
  if (sizex ==0 || sizey == 0)
    return;
  rect(startx, starty, sizex, sizey, 6,7,8,9);
  rect(startx, starty-sizey, sizex, sizey, 6,7,8,9);

  myrect(startx+sizex, starty, sizex/2, sizey/2);
  
}
 