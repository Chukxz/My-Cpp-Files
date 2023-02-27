int a = 88;
    int *ap = &a;

    int *p = new int;
    *p = 5;

    cout << a << endl << *ap << endl << ap << endl << *p << endl << p << endl;

    delete p;//deletes p