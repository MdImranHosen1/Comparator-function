    #include<bits/stdc++.h>
    using namespace std;

    class student {
    public:
        int age;
        float num;
        string name;
        student(int a, float nu, string na)
        {
            this->age = a;
            this->num = nu;
            this->name = na;
        }
    };

    class cmp {
    public:
        bool operator()(student a, student b)
        {
            return a.age > b.age;
        }
    };


    int main()
    {
        student s1(2, 4.2, "Imran"), s2(3, 2.1, "Arif"), s3(1, 2.1, "Imran");
        priority_queue<student, vector<student>, cmp>pq;

        pq.push(s1);
        pq.push(s2);
        pq.push(s3);

        while (!pq.empty())
        {
            cout << pq.top().age << " " << pq.top().num << " " << pq.top().name << endl;
            pq.pop();
        }
    }
