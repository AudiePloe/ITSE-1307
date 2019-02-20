// 
// Made by Audie Ploe
// 02/19/19
// Makes a buisness card in a file
//

#include "stdafx.h"
#include <iostream>
#include <fstream> // for files

using namespace std;

int main()
{
	ofstream Card;
	Card.open("BuisnessCard.vcf");// opening file

	Card << "BEGIN:VCARD" << endl;
	Card << "FN:Audie Ploe" << endl;
	Card << "TITLE:Goat soothing professional" << endl;
	Card << "TEL;TYPE=work,voice;VALUE=uri:1-800-PET-GOAT" << endl;
	Card << "EMAIL:Ipetgoats@gmail.com" << endl;
	Card << "ADR;TYPE=WORK:;;237 Goat Hill;Texas;USA" << endl;
	Card << "ORG: Goat soothers" << endl;
	Card << "END:VCARD" << endl;

	Card.close(); //closing file
    return 0;
}

