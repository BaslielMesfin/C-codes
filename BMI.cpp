#include <iostream>
using namespace std;

int main()
{
	float w,h,bmi;
	cout<<"BMI\n\nEnter your weight: ";
	cin>>w;
	cout<<"Enter your height: ";
	cin>>h;
	bmi = w / (h * h);
	if (bmi>0 && bmi<=50)
	{
		if (bmi<=18.5)
		{
			cout<<"BMI = "<<bmi<<" | Underweight";
		}
		else if (bmi>18.5 && bmi<25 )
		{
			cout<<"BMI = "<<bmi<<" | Healthy weight";
		}
		else if (bmi>=25 && bmi<30)
		{
			cout<<"BMI = "<<bmi<<" | Overweight. Eat less, move more not the other way around, jeez.";
		}
		else if (bmi>=30)
		{
			cout<<"BMI = "<<bmi<<" | Big mama, Lizzo, Fat Albert, Your mom, Heaviest man alive.";
		}
	}
	else
	{
		cout<<"You didn't enter the right input or you're BMI might have broken our BMI calculating software. Yo mama so fat she broke a digital BMI calculator.";
	}
	return 0;
}
