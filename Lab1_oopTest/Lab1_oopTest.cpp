#include "pch.h"
#include <fstream>
#include <string>

#include "CppUnitTest.h"
#include "../Bush.h"
#include "../Tree.h"
#include "../Flower.h"
#include "../Container.h"
#include "../Plant.h"

#include "../Bush.cpp"
#include "../Tree.cpp"
#include "../Flower.cpp"
#include "../Container.cpp"
#include "../Plant.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace lab1_procTest
{
	TEST_CLASS(lab1procTest)
	{
	public:

		TEST_METHOD(consonantsTest)
		{
			plant pt;
			string name = "Poplar";
			pt.name = name;

			int expected = 4;
			int actual = pt.consonants();

			Assert::AreEqual(expected, actual);
		}
		
		TEST_METHOD(compareTest)
		{
			plant first;
			plant second;
			first.name = "Maple";
			second.name = "Oak";

			bool expected = true;
			bool actual = first.compare(second);

			Assert::AreEqual(expected, actual);
		}
		
		TEST_METHOD(TreeInput)
		{
			ifstream ifst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Tree_Input.txt");
			tree actual;
			actual.InData(ifst);
			tree expected;
			expected.age = 10;
			Assert::AreEqual(expected.age, actual.age);
		}
		
		TEST_METHOD(TreeOutput)
		{
			ofstream ofst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Tree_Output.txt");
			tree tmp;
			tmp.age = 10;
			tmp.name = "Pine";
			tmp.hbt = plant::habitat::STEPPE;
			tmp.Out(ofst);
			ofst.close();
			ifstream ifst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Tree_Output.txt");
			string expected = "It is Tree: age = 10, Name = Pine, Habitat = steppe";
			string actual;
			getline(ifst, actual, '\n');
			ifst.close();
			Assert::AreEqual(expected, actual);

		}
		
		TEST_METHOD(BushInput)
		{
			ifstream ifst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Bush_Input.txt");
			bush actual;
			actual.InData(ifst);
			bush expected;
			expected.mof = bush::Month::MAY;
			Assert::AreEqual(int(expected.mof), int(actual.mof));
		}
		
		TEST_METHOD(BushOutput)
		{
			ofstream ofst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Bush_Output.txt");
			bush tmp;
			tmp.mof = bush::Month::MAY;
			tmp.name = "Blueberry";
			tmp.hbt = plant::habitat::TUNDRA;
			tmp.Out(ofst);
			ofst.close();
			ifstream ifst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Bush_Output.txt");
			string expected = "It is Bush: month of flowering = May, Name = Blueberry, Habitat = tundra";
			string actual;
			getline(ifst, actual, '\n');
			ifst.close();
			Assert::AreEqual(expected, actual);
		}
		
		TEST_METHOD(FlowerInput)
		{
			ifstream ifst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Flower_Input.txt");
			flower actual;
			actual.InData(ifst);
			flower expected;
			expected.tof = flower::type::HOME;
			Assert::AreEqual(int(expected.tof), int(actual.tof));
		}
		
		TEST_METHOD(FlowerOutput)
		{
			ofstream ofst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\Procedure\\lab1_procTest\\Tests\\Flower_Output.txt");
			flower tmp;
			tmp.tof = flower::type::GARDEN;
			tmp.name = "Rose";
			tmp.hbt = plant::habitat::TUNDRA;
			tmp.Out(ofst);
			ofst.close();
			ifstream ifst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\Procedure\\lab1_procTest\\Tests\\Flower_Output.txt");
			string expected = "It is Flower: type = Garden, Name = Rose, Habitat = tundra";
			string actual;
			getline(ifst, actual, '\n');
			ifst.close();
			Assert::AreEqual(expected, actual);
		}
		
		TEST_METHOD(PlantInput)
		{
			ifstream ifst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Plant_Input.txt");
			plant actual;
			actual.InData(ifst);
			plant expected;
			expected.name = "Pipe";
			expected.hbt = plant::habitat::STEPPE;
			Assert::AreEqual(int(expected.hbt), int(actual.hbt));
			Assert::AreEqual(expected.name, actual.name);
		}
		
		TEST_METHOD(Plant_Output)
		{
			plant pt;
			pt.name = "Rose";
			pt.hbt = plant::habitat::DESERT;

			ofstream ofst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Plant_Output.txt");
			pt.Out(ofst);
			ofst.close();
			ifstream ifst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Plant_Output.txt");
			string actual;
			getline(ifst, actual, '\n');
			ifst.close();
			string expected = "Name = Rose, Habitat = desert";
			Assert::AreEqual(expected, actual);

		}
		
		
		TEST_METHOD(ContainerOutput)
		{
			ifstream ifst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Container_In.txt");
			ofstream ofst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Container_Out.txt");
			container list;
			list.In(ifst);
			list.Out(ofst);
			ifst.close();
			ofst.close();
			ifstream expected_output("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Container_Out_Expected.txt");
			ifstream actual_output("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Container_Out.txt");
			string actual;
			string expected;
			getline(actual_output, actual, '\0');
			getline(expected_output, expected, '\0');
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(SortTest)
		{
			ifstream ifst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Container_In.txt");
			ofstream ofst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Container_Out_Sorted.txt");
			container list;
			list.In(ifst);
			list.sort();
			list.Out(ofst);
			ifst.close();
			ofst.close();
			ifstream expected_output("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Container_Out_Sorted_Expected.txt");
			ifstream actual_output("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Container_Out_Sorted.txt");
			string actual;
			string expected;
			getline(actual_output, actual, '\0');
			getline(expected_output, expected, '\0');
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TreeOnlyOutputTest)
		{
			ifstream ifst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Container_In.txt");
			ofstream ofst("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Tree_Only_Output.txt");
			container list;
			list.In(ifst);
			list.OutTree(ofst);
			ifst.close();
			ofst.close();
			ifstream expected_output("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Tree_Only_Output_Expected.txt");
			ifstream actual_output("C:\\Users\\rusta\\Desktop\\Labs\\Programs\\lab1\\OOP\\lab1_oopTest\\Tests\\Tree_Only_Output.txt");
			string actual;
			string expected;
			getline(actual_output, actual, '\0');
			getline(expected_output, expected, '\0');
			Assert::AreEqual(expected, actual);
		}
	};
}
