 #include <iostream>
 using namespace std;

 int main()
 {
 	string score[10][10][10], name[50], z;
 	int a,b[50],c[50],i,j,k,o=0,p=0, largest, course;
 	float arr[10][10][10], grade[50], gpa[10][10]={0}, cgpa[50];
 	cout<<"GPA and CGPA Calculator\n\n Enter the number of students: ";
 	cin>>a;
 	for (int i=0, o=0, n=1; i<a; ++i, ++o, ++n)
 	{
 	    cgpa[0]=0;
 		cout<<" Enter the name of student "<<i+1<<": ";
 		cin>>name[i];
 		cout<<"\tEnter the number of semesters of "<<name[i]<<": ";
 		cin>>b[o];
	 	for (int j=0, p=0; j<b[o]; ++j, ++p)
 		{
 			cout<<"\t\tEnter the number of courses for semester "<<j+1<<": ";
 			cin>>c[p];
 			for (int k=0, l=0; k<c[p]; ++k, ++l)
 			{
 				cout<<"\t\t\tEnter the mark for course "<<k+1<<", semsester "<<j+1<<": ";
 				cin>>arr[i][j][k];
 				if (arr[i][j][k]>=85 && arr[i][j][k]<=100){
					grade[l]=4;
					z="A";}
				else if (arr[i][j][k]>=80){
					grade[l]=3.75;
					z="A-";}
				else if (arr[i][j][k]>=75){
					grade[l]=3.5;
					z="B+";}
				else if  (arr[i][j][k]>=70){
					grade[l]=3;
					z="B";}
				else if (arr[i][j][k]>=65){
					grade[l]=2.75;
					z="B-";}
				else if (arr[i][j][k]>=60){
					grade[l]=2.5;
					z="C+";}
				else if  (arr[i][j][k]>=50){
					grade[l]=2;
					z="C";}
				else if (arr[i][j][k]>=45){
					grade[l]=1.75;
					z="C-";}
				else if (arr[i][j][k]>=40){
					grade[l]=1;
					z="D";}
				else{
					grade[l]=0;
					z="F";}
				gpa[i][j] += grade[l];
				score[i][j][k]=z;
			}
			cout<<"GPA of "<<name[i]<<", semester "<<i+1<<": "<<(gpa[i][j]*3)/(c[p]*3)<<endl;
            cgpa[n] += (gpa[i][j]*3)/(c[p]*3)/b[o];
		}
		cout<<"CGPA of "<<name[i]<<": "<<cgpa[n]<<endl;
	}
	cout<<"\n\nName\t";
	largest=b[0];
	for (int i=0; i<50; ++i)
	{
		if (largest < b[i])
		largest = b[i];
	}
	course=c[0];
	for (int i=0, n=1; i<50; ++i, ++n)
	{
		if (course < c[i])
		course = c[i];
	}
    for (int j=0; j<largest; ++j)
    {
        for (int k=0; k<course; ++k)
        {
            cout<<"/Sem"<<j+1<<" C"<<k+1<<"/\t";
        }
        cout<<"GPA\t";
        if (j==largest-1)
        cout<<"CGPA";
    }
    for (int i=0, n=1; i<a; ++i, ++n)
    {
        cout<<"\n"<<name[i];
        for (int j=0, p=0; j<b[i]; ++j, ++p)
        {
            for (int k=0; k<c[j]; ++k)
            {
                cout<<"\t\t"<<score[i][j][k];
            }
        cout<<"\t"<<(gpa[i][j]*3)/(c[p]*3)<<" ";
        if (j==b[i]-1)
        cout<<"\t";
		}
        cout<<cgpa[n];
    }
    cout<<endl;
	return 0;
 }
