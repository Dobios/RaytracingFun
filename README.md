# RaytracingFun
A little ray tracer I'm writing from scratch in cpp.  

## Current state  
It only renders spheres in a very buggy way, trying to fix...    
![Example result from the ray tracer](./result.ppm)  
  
## How to use it  
You'll need to have the latest version of cmake along with a c++ compiler of your choice:  
```sh  
mkdir build  
cd build  
cmake ../src  
make   
```  
The result will be written as an image inside the `build` folder named `result.ppm`.    

