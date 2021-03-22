void loai(int dtb)
{
	if (dtb <=8 && dtb <=10) cout << "gioi" << endl;
	else if (dtb >=6.5 && dtb < 8.0) cout << "kha" << endl;
	else if (dtb >=5.0 && dtb < 6.5) cout << "tb" << endl;
	else if (dtb >=3.5 && dtb < 5.0) cout << "yeu" << endl;
	else cout << "kem" << endl;
}
