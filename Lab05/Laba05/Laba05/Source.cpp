cout << "¬ведите букву русского алфавита";
cin >> russim;
if (russim < 256 && russim > 192)
{
	bigsim = toupper(russim);
	smsim = tolower(rusim);
	cout << int(bigsim) << endl;
	cout << int(smsim) << endl;
	cout << smsim - bigsim << endl;
}
else
cout << "fuck you";