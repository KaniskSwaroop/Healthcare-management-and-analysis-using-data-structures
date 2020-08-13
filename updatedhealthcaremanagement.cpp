#include<bits/stdc++.h>

using namespace std;

class treenode               //class for creating the tree
{
	public:
		string data;
		treenode* left;
		treenode* right;
		treenode(string data)
		{
			this->data = data;
			left = right = NULL;
		}
};
void preorder(treenode* root) //function for inorder traversal of the tree
{
	if (root == NULL)
		return;
	cout << root->data<<" -> ";
	preorder(root->left);
	preorder(root->right);
}
void levelordertraversal(treenode* root) //function for levelorder traversal of the tree 
{
	queue<treenode* > q;
	q.push(root);
	while (!q.empty())
	{
		treenode* node = q.front();
		cout << node->data<<" -> ";
		q.pop();
		if (node->left != NULL)
			q.push(node->left);
		if (node->right != NULL)
			q.push(node->right);
	}
}
void listhere()
{
	stack<string> s;
	cout << "The priority order should be" << endl;
	s.push("short track and filed");
	s.push("swimming");
	s.push("slow jogs");
	s.push("brisk walks");
	while (!s.empty())
	{
		cout << "-> " << s.top();
		s.pop();
	}
}
void intenseexercises()
{
	cout << "You need to make your heart stronger. The following activities could help" << endl;
	queue<string> q;
	q.push("Run");
	q.push("Jog");
	q.push("swimming");
	q.push("Hiking");
	q.push("Cycling");
	while (!q.empty())
	{
		cout << "-> " << q.front();
		q.pop();
	}
}
void dietmen()
{
	cout << "If BMI is normal" << endl << endl;
	cout << "Get more of vegetable and fruits for fiber" << endl;
	cout << "Begin the day with a clean low fat breakfast" << endl;
	cout << "Carbs can be included in lunch. Rice could be preferred for mainatining the sugar level in the body" << endl;
	cout << "Follow your regular workout schedule" << endl;
	cout << "Carbs at night should be completely avoided and try to take supper 2 hours before you sleep" << endl;
	cout << "Maintain a protein rich diet with protein amount>= 1.2 to 2 times the body weight" << endl<<endl;

	cout << "If BMI is high" << endl << endl;
	cout << "Diet is crucial" << endl;
	cout << "Prefer morning workouts as the stored body fat would get burnt" << endl;
	cout << "Maintain a protein rich diet with protein amount>= 1.2 to 2 times the body weight" << endl;
	cout << "CARDIO is mandatory for atleast 3 days in the week. Plan accordingly" << endl;
	cout << "Have a check on your calorie intake. An active male needs 3000 CAL per day" << endl;
	cout << "Try taking small meals at regular intervals rather than 3 big meals in the day" << endl<<endl;

	cout << "If BMI is low" << endl<<endl;
	cout << "Carbs and fat is important . Not trans fat. Clean bulking should be done. Consume seeds like flaxseeds, sunflower seeds, pumpkin seeds etc" << endl;
	cout << "Consume rice for maintaining sugar and carbs balance in the body" << endl;
	cout << "Consume fruits and vegetables for fiber" << endl;
	cout << "Workout for 5-6 days a week with major focus on push-ups" << endl;
	cout << "Maintain a protein rich diet with protein amount>= 1.2 to 2 times the body weight" << endl;
	cout << "6-8 hours of night sleep is must for muscle growth" << endl;
	cout << "Cardio can be skipped." << endl<<endl;


}
void female(int age,int disease, treenode* root,vector<string> exercise)
{
	/*stack<string> s1;
	stack<string> s2;
	s1.push("yoga");
	s1.push("swimming");
	s1.push("dancing");
	s1.push("brisk walks or slow jogs");*/
	if (age <= 18)
	{
		switch(disease)
		{
		case 6: //nil
			cout << "You are perfectly fit and fine!! But don't take that for granted miss" << endl;
			cout << "You can follow the following fitness regime starting any day of your choice " << endl;
			levelordertraversal(root); //calling the levelorder function
			cout << endl;
			break;
		case 5: //cholestrol
			cout << "You would be perfectly fit and fine if you follow the following regime 5 days a week :" << endl;
				for (int i = 0; i < exercise.size(); i++)
				{
					cout << exercise[i] << " ";
				}
				break;
		case 4: //sugar /diabetes
			cout << "This following regime will help your life to get a bit bitter : " << endl;
			for (int i = 0; i < exercise.size(); i++)
			{
				cout << exercise[i] << " ";
			}
			cout << "Try to avoid eating a lot of rice or fruits with sugar content. For example: grapes, mango etc" << endl;
			cout << "Bittergourd is your remedy along with a brisk walk every morning." << endl;
			
			break;

		case 3://chronic diseases
			cout << "We are only considering diseases like Asthma and Arthritis" << endl;
			cout << "Asthma" << endl;
			for (int i = 0; i < exercise.size() - 1; i++)
			{
				cout << exercise[i] << " ";
			}
			cout << "Arthritis" << endl;
			cout << "Yoga is the best solution for you" << endl;
			listhere();
			break;
		case 2://Hypertension
			cout << "Maam  you need to take things easy." << endl;
			intenseexercises();
			break;

		case 1://any heart disorders
			cout << "Is it a heart disease or a heart break ? just kidding. Things can get better" << endl;
			cout << "Walk it out" << endl;
			cout << "slow jogs is your thing" << endl;
			cout << "Activities that keeps you mind engaged example music, reading, movies etc" << endl;
			break;
		}
	}
	else if (age > 18 && age <= 40)
	{
		switch (disease)
		{
			case 1://any heart disorders
				cout << "Dont try to push your heart a lot. The the following" << endl;
				for (int i = 0; i < exercise.size() - 1; i++)
				{
					cout << exercise[i] << " ";
				}
				cout << endl << "Above mentioned aerobic activities for 3-4 days a week would be helpful " << endl;
				break;
			case 2://Hypertension
				cout << "Things that could help are : " << endl;
				cout << "Ten minutes of brisk or moderate walking three times a day. Exercise lowers blood pressure by reducing blood vessel stiffness so blood can flow more easily." << endl;
				cout << "Thirty minutes a day of biking or stationary cycling, or three 10-minute blocks of cycling. " << endl;
				cout << "Swimming" << endl;
				intenseexercises();
				break;
			case 3://Chronic diseases
				cout << "We are only considering diseases like Asthma and Arthritis" << endl;
				cout << "Asthma" << endl;
				cout << "Swimming. Swimming is one of the most recommended exercises for people with asthma." << endl;
				cout << "Walking. As a low-intensity activity, walking is another great choice." << endl;
				cout << "Sports with short bursts of activity." << endl<<endl;


				cout << "Arthritis" << endl;
				cout << "Try to work your way up to 150 minutes of moderately intense aerobic exercise per week. You can split that time into 10-minute blocks if that's easier on your joints." << endl;
				cout << "walking, bicycling, swimming and using an elliptical machine" << endl;
				break;
			case 4://sugar/diabetes
				cout << "Diet is the key for you" << endl;
				cout << "The following things could be considered" << endl;
				for (int i = 0; i < exercise.size(); i++)
				{
					cout << exercise[i] << " ";
				}
				cout << "Try to avoid eating a lot of rice or fruits with sugar content. For example: grapes, mango etc" << endl;
				cout << "Bittergourd is your remedy along with a brisk walk every morning." << endl;
				intenseexercises();
				break;
			case 5://cholestrol
				cout << "High cholestrol shouldn't be much of an obstacle for you. The following workout pattern could help :" << endl;
				levelordertraversal(root);
				cout << "If not then consider the following : " << endl;
				intenseexercises();
				break;
			case 6://nill
				cout << "Try to maintaing the healthy body you posses. A regular workout should help." << endl;
					cout << "For strength training : " << endl;
				levelordertraversal(root);
				cout << endl << "For endurance and fitness:";
					intenseexercises();
					break;

		}
	}
	else if (age > 40)
	{
		switch (disease)
		{
			case 1://any heart disorders
				listhere();
				cout << "Morning walk is must";
				cout << "Avoid rich food and try consuming nuts(almonds, cashew, walnuts etc) for good fat which helps in maintaing daily energy requirements" << endl;
				cout << "Try to maintain a stress free environment. You are experinced and you understand that if there is problem then there's always a solution to it." << endl;
				break;
			case 2://Hypertension
				intenseexercises();
				cout << endl << "Long intenses runs should be avoided. Consistency is important" << endl;
				cout << "Try consuming more green vegetables and fruits(avoid fruits with high sugar content like grapes)" << endl;
				cout << "6-8 hours of good night sleep is very important" << endl;
				cout << "Try consuming home made juice rather than packed products containig sweeteners." << endl;
				break;
			case 3://chronic disease
				cout << "We are only considering diseases like Asthma and Arthritis" << endl;
				cout << "Asthma" << endl;
				cout << "Swimming. Swimming is one of the most recommended exercises for people with asthma." << endl;
				cout << "Walking. As a low-intensity activity, walking is another great choice." << endl;
				cout << "Sports with short bursts of activity." << endl << endl;


				cout << "Arthritis" << endl;
				cout << "Try to work your way up to 150 minutes of moderately intense aerobic exercise per week. You can split that time into 10-minute blocks if that's easier on your joints." << endl;
				cout << "walking, bicycling, swimming and using an elliptical machine" << endl;
				break;

			case 4://sugar/diabetes
				cout << "Diet is the key for you" << endl;
				cout << "The following things could be considered" << endl;
				for (int i = 0; i < exercise.size(); i++)
				{
					cout << exercise[i] << " ";
				}
				cout << "Try to avoid eating a lot of rice or fruits with sugar content. For example: grapes, mango etc" << endl;
				cout << "Bittergourd is your remedy along with a brisk walk every morning." << endl;
				cout << "The following workouts could also be considered" << endl;
				intenseexercises();
				break;
			case 5://Cholestrol
				cout << "This is common bit of problem but this shouldnt be an obstacle in building a fitter you" << endl;
				cout << "The following things could be considered" << endl;
				for (int i = 0; i < exercise.size(); i++)
				{
					cout << exercise[i] << " ";
				}
				cout << "Try to avoid trans fat which come in both natural and artificial forms. Natural, or ruminant, trans fats occur in the meat and dairy from ruminant animals, such as cattle, sheep, and goats.";
				cout << "Trans fat is double trouble for your heart health" << endl;
				cout << "Consuming avocado is the most profitable deal for you" << endl;
				break;
			case 6:
				cout << "Being disease free at this age is great. But you need to maintain it";
				intenseexercises();
				cout <<endl<< "Try to avoid eating a lot of rice or fruits with sugar content. For example: grapes, mango etc" << endl;
				break;

		}
	}

}
void male(int age,int disease, treenode* root, vector<string> exercise)
{
	if (age <= 18)
	{
		switch (disease)
		{
			case 1://heart disorders
				cout << "Is it a heart disease or a heart break ? just kidding. Things can get better" << endl;
				cout << "An intense workout pattern could be followed : You have 2 options " << endl;
				cout << "For endurance and fitness :"<<endl;
				intenseexercises();
				cout << "For builing muscles :" << endl;
				levelordertraversal(root);
				cout << endl << "OR" << endl;
				preorder(root);
				cout << endl;
				dietmen();
				break;
			case 2://Hypertension
				intenseexercises();
				dietmen();
				cout << "If body permits the following workout regime could also be followed" << endl;
				levelordertraversal(root);
				break;
			case 3://chronic disease
				cout << "We are only considering diseases like Asthma and Arthritis" << endl;
				cout << "Asthma" << endl;
				cout << "Swimming. Swimming is one of the most recommended exercises for people with asthma." << endl;
				cout << "Walking. As a low-intensity activity, walking is another great choice." << endl;
				cout << "Sports with short bursts of activity." << endl << endl;


				cout << "Arthritis" << endl;
				cout << "Try to work your way up to 150 minutes of moderately intense aerobic exercise per week. You can split that time into 10-minute blocks if that's easier on your joints." << endl;
				cout << "walking, bicycling, swimming and using an elliptical machine" << endl;

				cout << "Don't forget push-ups";
				break;
			case 4://sugar/diabetes
				cout<<"You can consider the following"<<endl;
				//instenseexercises();
				dietmen();
				cout << "If body permits the following workout regime could also be followed" << endl;
				levelordertraversal(root);
				cout<<endl<<"OR"<<endl;
				intenseexercises();
				break;
			case 5://Cholestrol
				cout << "You would be perfectly fit and fine if you follow the following regime 5 days a week :" << endl;
				dietmen();
				levelordertraversal(root);
				cout << endl << "OR" << endl;
				preorder(root);
				break;
			case 6://nill
				cout << "Workout mate. Here's your schedule" << endl;
				levelordertraversal(root);
				cout << endl << "OR" << endl;
				preorder(root);
				cout << endl;
				dietmen();
				break;

		}
	}
	else if (age > 18 && age <= 40)
	{
		switch (disease)
		{
			case 1://heart disorders
				cout << "An intense workout pattern could be followed : You have 2 options " << endl;
				cout << "For endurance and fitness :" << endl;
				intenseexercises();
				cout << "For builing muscles :" << endl;
				levelordertraversal(root);
				cout << endl << "OR" << endl;
				preorder(root);
				cout << endl;
				dietmen();
				break;
			case 2://hypertension
				intenseexercises();
				dietmen();
				cout << "If body permits the following workout regime could also be followed" << endl;
				levelordertraversal(root);
				break;
			case 3://chronic
				cout << "We are only considering diseases like Asthma and Arthritis" << endl;
				cout << "Asthma" << endl;
				cout << "Swimming. Swimming is one of the most recommended exercises for people with asthma." << endl;
				cout << "Walking. As a low-intensity activity, walking is another great choice." << endl;
				cout << "Sports with short bursts of activity." << endl << endl;


				cout << "Arthritis" << endl;
				cout << "Try to work your way up to 150 minutes of moderately intense aerobic exercise per week. You can split that time into 10-minute blocks if that's easier on your joints." << endl;
				cout << "walking, bicycling, swimming and using an elliptical machine" << endl;

				cout << "Don't forget push-ups";
				break;
			case 4://sugar diabetes
				intenseexercises();
				dietmen();
				cout << "If body permits the following workout regime could also be followed" << endl;
				levelordertraversal(root);
				break;
			case 5://cholestrol
				cout << "You would be perfectly fit and fine if you follow the following regime 5 days a week :" << endl;
					dietmen();
				levelordertraversal(root);
				cout << endl << "OR" << endl;
				preorder(root);
				break;
			case 6:
				cout << "Workout mate. Here's your schedule" << endl;
				levelordertraversal(root);
				cout << endl << "OR" << endl;
				preorder(root);
				cout << endl;
				dietmen();
				break;

		}
	}
	else if (age > 40)
	{
		switch (disease)
		{
			case 1://heart disorders
				listhere();
				dietmen();
				break;
			case 2://hypertension
				intenseexercises();
				dietmen();
				cout << "If body permits the following workout regime could also be followed" << endl;
				levelordertraversal(root);
				break;
			case 3://chronic
				cout << "We are only considering diseases like Asthma and Arthritis" << endl;
				cout << "Asthma" << endl;
				cout << "Swimming. Swimming is one of the most recommended exercises for people with asthma." << endl;
				cout << "Walking. As a low-intensity activity, walking is another great choice." << endl;
				cout << "Sports with short bursts of activity." << endl << endl;


				cout << "Arthritis" << endl;
				cout << "Try to work your way up to 150 minutes of moderately intense aerobic exercise per week. You can split that time into 10-minute blocks if that's easier on your joints." << endl;
				cout << "walking, bicycling, swimming and using an elliptical machine" << endl;
				break;
			case 4://sugar/diabetes
				cout << "Diet is the key for you" << endl;
				cout << "The following things could be considered" << endl;
				for (int i = 0; i < exercise.size(); i++)
				{
					cout << exercise[i] << " ";
				}
				cout << "Try to avoid eating a lot of rice or fruits with sugar content. For example: grapes, mango etc" << endl;
				cout << "Bittergourd is your remedy along with a brisk walk every morning." << endl;
				cout << "The following workouts could also be considered" << endl;
				intenseexercises();
				cout << endl;
				dietmen();
				break;
			case 5://cholestrol
				cout << "This is common bit of problem but this shouldnt be an obstacle in building a fitter you" << endl;
				cout << "The following things could be considered" << endl;
				for (int i = 0; i < exercise.size(); i++)
				{
					cout << exercise[i] << " ";
				}
				cout << "Try to avoid trans fat which come in both natural and artificial forms. Natural, or ruminant, trans fats occur in the meat and dairy from ruminant animals, such as cattle, sheep, and goats.";
				cout << "Trans fat is double trouble for your heart health" << endl;
				cout << "Consuming avocado is the most profitable deal for you" << endl;
				break;
			case 6:
				cout << "Being disease free at this age is great. But you need to maintain it";
				intenseexercises();
				cout << endl << "OR" << endl;
				for (int i = 0; i < exercise.size(); i++)
				{
					cout << exercise[i] << " ";
				}
				cout << endl << "Try to avoid eating a lot of rice or fruits with sugar content. For example: grapes, mango etc" << endl;
				dietmen();
				break;

		}
	}

}
int main()
{
	char gender;
	cout << "Enter you gender as M or F : " << endl;//enter gender
	cin >> gender;
	cout << endl;
	
	cout << "Enter your age : " ;//enter age
	int age;
	cin >> age;
	while (age <= 0)//checking correctness of age
	{
		cout << "Please enter a valid age !" << endl;
		cout << "Re-enter your correct age : " << endl;
		cin >> age;
	}
	cout << endl;
	
	cout << "Mentioned below are a list of some common ailgnments. Please enter the corresponding index of the disease " << endl;//diseases if any
	cout << "(1) Any heart disorders" << endl << "(2) Hypertension" << endl << "(3) Chronic disease" << endl << "(4) Sugar/Diabetes" << endl << "(5) Cholestrol" << endl<<"(6) I have nothing to do with diseases "<<endl;
	cout << "Enter your choice :" << endl;
	int disease;
	cin >> disease;
	while(disease != 1 && disease != 2 && disease != 3 && disease != 4 && disease != 5 && disease != 6)
	{
		cout << "Please enter the index value and not the name of the disease " << endl;
		cin >> disease;
	}
	
	cout << endl;
	treenode* root = new treenode("shoulder"); //tree created for workout schedule
	root->left = new treenode("biceps and cardio");
	root->right = new treenode("chest");
	root->left->left = new treenode("back");
	root->left->right = new treenode("triceps and cardio");
	root->right->left = new treenode("legs");
	root->right->right = new treenode("rest");


	vector<string> exercise(4);//vector to check exercises for high cholestrol people
	int i;
	exercise.push_back("Yoga");
	exercise.push_back("Brisk walks");
	exercise.push_back("Slow jogs");
	exercise.push_back("Light weight exercises");

	switch (gender)//calling gender functions
	{
	case 'M':
		male(age, disease, root, exercise);
		break;
	case 'F':
		female(age, disease, root, exercise);
		break;
	default:
		cout << "Please enter a valid gender!" << endl;
		break;
	}
	return 0;
}
