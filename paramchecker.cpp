static int isparamOk(float bpm, float lower, float upper);
static int isparamOk(float param, float lower, float upper)
{
  int return_value = 1;
  if ( param < lower || param > upper) {
    return_value = 0;
  }
  return (return_value);
}
  
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  int bpmret;
  int respRateret;
  int spo2ret;
  bool retval = false;
  bpmret = isparamOk(bpm,70,150);
    
  spo2ret = isparamOk(spo2,80,100); 
    
  respRateret = isparamOk(respRate,30,60);
   
  if ((bpmret & respRateret & spo2ret) == 1) {
    retval =  true;
  }
  return retval;
  
}
