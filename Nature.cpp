#include<iostream>
#include<cmath>
int main(int argc, char**argv){
	float a,b,c;
	int x;
	do{
	std::cout<<"Entrer la mesure respective de chacun des 3 cotes du triangle"<<std::endl;
	std::cin>>a>>b>>c;
	if(a<0||b<0||c<0){
		std::cout<<"les mesures doivent être positives"<<std::endl;
	}else if(pow(a,2)==pow(b,2)+pow(c,2)||pow(b,2)==pow(a,2)+pow(c,2)||pow(c,2)==pow(b,2)+pow(a,2)){
		std::cout<<"c'est un triangle rectangle"<<std::endl;
	}else if(pow(a,2)==pow(b,2)+pow(c,2)||pow(b,2)==pow(a,2)+pow(c,2)||pow(c,2)==pow(b,2)+pow(a,2) && a==b||a==c||b==c){
		std::cout<<"c'est un triangle isocele rectangle"<<std::endl;
	}else if(a==b && b==c && a==c){
		std::cout<<"c'est un triangle equilateral"<<std::endl;
	}else if(a==b||a==c||b==c){
		std::cout<<"c'est un triangle isocèle";
	}else{
		std::cout<<"c'est un triangle quelconque"<<std::endl;
	}
	std::cin>>x;
	}while(x!=0);
	return 0;
}


