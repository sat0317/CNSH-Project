float a;
float b;
int da;
int db;

void setup() {
  size(640, 360);
  stroke(255);
  a = 0;
  b = 0;
  da = 1;
  db = 1;
}

void draw() {
  background(51);
  point(b, a);
  a = a + da;
  b = b + db;
  if (a >= height || a<=0) { 
    da = da*(-1);  
    a=a+da;
  }
  if (b >= width || b<=0) { 
    db = db*(-1); 
    b = b + db;
  }
}
