#define fy 3.1415965

double value;

double diameter(double rdvalue){
	
	value=rdvalue*2.0;
	return value;		
}

double circumference(double rdvalue){
	
	value=2.0*fy*rdvalue;
	return value;		
}

double area(double rdvalue){
	
	value=fy*(pow(rdvalue,2));
	return value;		
}
