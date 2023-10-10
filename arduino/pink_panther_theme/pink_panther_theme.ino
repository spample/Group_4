// Adapted J. Pearson 2/25/2018
// This code plays part of Row Row Row your boat, using basic code.
// Try this with and without loops and variables.

/*
Notes chart:
  C     C#     D     Eb   E     F     F#    G     G#    A     Bb    B
0 16.35 17.32 18.35 19.45 20.60 21.83 23.12 24.50 25.96 27.50 29.14 30.87
1 32.70 34.65 36.71 38.89 41.20 43.65 46.25 49.00 51.91 55.00 58.27 61.74
2 65.41 69.30 73.42 77.78 82.41 87.31 92.50 98.00 103.8 110.0 116.5 123.5
3 130.8 138.6 146.8 155.6 164.8 174.6 185.0 196.0 207.7 220.0 233.1 246.9
4 261.6 277.2 293.7 311.1 329.6 349.2 370.0 392.0 415.3 440.0 466.2 493.9
5 523.3 554.4 587.3 622.3 659.3 698.5 740.0 784.0 830.6 880.0 932.3 987.8
6 1047  1109  1175  1245  1319  1397  1480  1568  1661  1760  1865  1976
7 2093  2217  2349  2489  2637  2794  2960  3136  3322  3520  3729  3951
8 4186  4435  4699  4978  5274  5588  5920  6272  6645  7040  7459  7902
*/
int D_sharp = 622;
int E = 659;
int F_sharp = 740;
int G = 784;
int output = 11;
int C = 523;
int B = 494;
int A_sharp = 880; 
int D = 587;
int A = 440;

//D_sharp E F_sharp G D_sharp E F_sharp G CB E G B A_sharp AG EDE


void setup()
{
for (int i = 0; i < 3; i++){
    // Measure 1, 2 seconds
    // D_sharp
    tone(output, D_sharp);    // tone(outputPin,frequency)
      delay(100);  //  delay(milliseconds) 
    // C4
    tone(output, E);   
      delay(100);   
    noTone(output);  
      delay(1000);  
    // Measure 2, 2 seconds
    // C4
    tone(output, F_sharp);    
      delay(100);  
    // D4
    tone(output, G);    
      delay(100);
    noTone(output);
      delay(1000);  
    // E4
    tone(output, D_sharp);    
      delay(100);   
    // Measure 3, 2 seconds
    // E4
    tone(output, E);    
      delay(100);
    noTone(output);
      delay(500); 
    // D4 
    tone(output, F_sharp);  
      delay(100); 
    // E4
    tone(output, G);    
      delay(500);
    noTone(output);
      delay(500); 
    // F4
    tone(output, C);    
      delay(100); 
    tone(output, B);    
      delay(120);
    noTone(output);
      delay(700); 
      // E4
    tone(output, E);    
      delay(100); 
          // E4
    tone(output, G);    
      delay(200);
    noTone(output);
      delay(500); 
          // E4
    tone(output, B);    
      delay(100); 
          // E4
    tone(output, A_sharp);    
      delay(2000); 
          // E4
    tone(output, A);    
      delay(80); 
          // E4
    tone(output, G);    
      delay(100); 
          // E4
    tone(output, E);    
      delay(80); 
          // E4
    tone(output, D);    
      delay(80); 
          // E4
    tone(output, E);    
      delay(150); 
    // END
    noTone(output); // stop playing
}
}
 
void loop()
{
  
}
