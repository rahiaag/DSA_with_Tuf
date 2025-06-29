void precise(float a, float b) {
    // perform a/b
    float c=a/b;
    cout << a/b << " " << /*use setprecision(3) here*/setprecision(3)
         << /*use fixed here*/fixed << /*Output c here*/c << endl;
}