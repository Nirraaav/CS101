 #include <simplecpp>

main_program{
	long double a, b, c, d;
	cin >> a >> b >> c >> d;
	long double ans = (a*d + b*c)/(b*d);
	cout << ans << "\n";
}