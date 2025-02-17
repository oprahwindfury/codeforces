@echo off
set /p filename="Enter problem name: "
echo #include <bits/stdc++.h> > src/%filename%.cpp
echo using namespace std; >> src/%filename%.cpp
echo. >> src/%filename%.cpp
echo int main() { >> src/%filename%.cpp
echo     ios_base::sync_with_stdio(false); cin.tie(NULL); >> src/%filename%.cpp
echo     return 0; >> src/%filename%.cpp
echo } >> src/%filename%.cpp
echo Created src/%filename%.cpp
