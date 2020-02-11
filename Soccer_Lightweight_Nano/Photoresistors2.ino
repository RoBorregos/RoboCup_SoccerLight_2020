bool photoresistors2(){
  lines2();
  int range = 870;
   if(pr[0] > range || pr[1] > range || pr[2] > range || pr[3] > range || pr[4] > range || pr[5] > range || pr[6] > range || pr[7] > range || pr[8] > range || pr[9] >range || pr[10] > range || pr[11] > range || pr[12] > range || pr[13] > range || pr[14] > range){
    return true;
   }
   else{
    return false;
   }
}

void interrupt2(){
  i = photoresistors2();
  
  digitalWrite(INTRR, i);
  digitalWrite(COMPIN1, i);

  if(i){
    digitalWrite(COMPIN1, i);
    delay(600);
  }

  // Attempt at a better implementation of a delay
  /* 
  if(i){
    timeTrack = millis();
    bool j;
    
    while(timeTrack + 600 > millis()){
      digitalWrite(COMPIN1, true);
      if(!photoresistors2()){
        j = true;
      }
      if(j && photoresistors2(){
        digitalWrite(INTRR, false);
        delay(50);
        digitalWrite(INTRR, true);
        j = false;
      }
    }
  }
  */
  
  Serial.println(i);
}