void setup() {
  Serial.begin(9600);

}

void loop() {
  int enc1randomVal = random(0,256);
  int enc2randomVal = random(0,256);
  int enc3randomVal = random(0,256);
  int enc4randomVal = random(0,256);

  int enc1randomDir = random(0,2);
  int enc2randomDir = random(0,2);
  int enc3randomDir = random(0,2);
  int enc4randomDir = random(0,2);

  char line[18];

  sprintf(line,"S%d%03d%d%03d%d%03d%d%03dF",enc1randomDir,enc1randomVal,enc2randomDir,enc2randomVal,enc3randomDir,enc3randomVal,enc4randomDir,enc4randomVal);
  
  Serial.println(line);
  
}
