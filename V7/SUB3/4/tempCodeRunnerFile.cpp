    int s;
    cin >> s;
    while (s)
    {
        cout << sum(s) << " ";
        s -= sum(s);
    }