static int isbpmOk(float bpm);
static int isbpmOk(float bpm)
{
  int return_value;
  return_value = 1;
  if(bpm < 70 || bpm > 150) {
    return_value = 0;
  }
  return (return_value);
}

static int isrespRateOk(float respRate) {
  int return_value;
  return_value = 1;
  if (respRate < 30 || respRate > 60) {
    return_value = 0;
  }
  return (return_value);
}

static int isspo2Ok(float spo2)
{
  int return_value;
  return_value = 1;
  if (spo2 < 80) {
    return_value = 0;
  }
  return(return_value);
}
  
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  int bpmret;
  int respRateret;
  int spo2ret;
  bool retval = false;
  bpmret = isbpmOk(bpm);
    
  spo2ret = isspo2Ok(spo2); 
    
  respRateret = isrespRateOk(respRate);
   
  if ((bpmret & respRateret & spo2ret) == 1) {
    retval =  true;
  }
  return retval;
  
}
