#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool getInput(vector<float> &feature_buffer) {
   bool success = true;

   for(int i = 0; i < feature_buffer.size(); i++) {
      if(!(cin >> feature_buffer[i])) {
         success = false;
         break;
      }
   }
   
   return success;
}

float distance(vector<float> &example1, vector<float> &example2) {
   float accumulator = 0;
   
   for(int i = 0; i < example1.size(); i++) {
      accumulator = pow(example1[i] - example2[i], 2);
   }
   
   return sqrt(accumulator);
}

vector<float> centroid(vector<vector<float> > dataset) {
   vector<float> center(dataset[0].size());
   
   for(int i = 0; i < dataset.size(); i++) {
      for(int j = 0; j < center.size(); j++) {
         center[j] += dataset[i][j];
      }
   }
   
   for(int i = 0; i < center.size(); i++) {
      center[j] = (float) center[j] / (float) dataset.size();
   }
   
   return center;
}

int main() {
   int n = 0;
   
   cin >> n;
   
   vector<float> feature_buffer(n);
   vector<vector<float> > dataset;
   vector<float> distances(dataset.size());
   
   while(getInput(feature_buffer)) {
      dataset.push_back(feature_buffer);
      
      feature_buffer.clear();
   }
   
   

   return 0;
}
