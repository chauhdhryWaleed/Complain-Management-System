//#include <iostream>
//#include <string>
//#include <cstdio>
//#include <fstream>
//#include<list>
//#include <chrono>
//#include <thread>
//#include<vector>
//#include <chrono>
//#include <ctime>
//
//using namespace std;
//class Employee;
//class Complain;
//class Date;
//class Department;
//class Teacher;
//class ElectricalEngineeringDepartment;
//class ManagementDepartment;
//class ComputerScienceDepartment;
//class AccountsDepartment;
//class AdministrationDepartment;
//class ITDepartment;
//class staff_departments;
//class csystem;
//
//class Date {
//private:
//    int year;
//    int month;
//    int day;
//
//public:
//    // Constructor
//    Date(int year, int month, int day)
//        : year(year), month(month), day(day) {}
//
//    Date()
//    {
//        year = 0;
//        month = 0;
//        day = 0;
//    }
//
//    Date(const string& d)
//    {
//        if (check_format(d) == true)
//        {
//            char da[3] = { "\0" };
//            char mo[3] = { "\0" };
//            char ye[5] = { "\0" };
//
//            da[0] = d[0];
//            da[1] = d[1];
//
//            mo[0] = d[3];
//            mo[1] = d[4];
//
//            ye[0] = d[6];
//            ye[1] = d[7];
//            ye[2] = d[8];
//            ye[3] = d[9];
//
//
//            day = atoi(da);
//            month = atoi(mo);
//            year = atoi(ye);
//        }
//        else
//        {
//            cout << "Incorrect format.\n\n";
//
//            year = 0;
//            month = 0;
//            day = 0;
//
//        }
//    }
//
//    void set_date(const string& d)
//    {
//        if (check_format(d) == true)
//        {
//            char da[3] = { "\0" };
//            char mo[3] = { "\0" };
//            char ye[5] = { "\0" };
//
//            da[0] = d[0];
//            da[1] = d[1];
//
//            mo[0] = d[3];
//            mo[1] = d[4];
//
//            ye[0] = d[6];
//            ye[1] = d[7];
//            ye[2] = d[8];
//            ye[3] = d[9];
//
//
//            day = atoi(da);
//            month = atoi(mo);
//            year = atoi(ye);
//        }
//        else
//        {
//            cout << "Incorrect format.\n\n";
//
//            year = 0;
//            month = 0;
//            day = 0;
//
//        }
//    }
//
//    // Function to get the date as a string
//    string toString_date() const {
//        return to_string(year) + "-" + to_string(month) + "-" + to_string(day);
//    }
//
//    bool check_format(const string d)
//    {
//
//
//        if (size(d) < 10)
//        {
//            return false;
//        }
//
//
//
//        char da[3] = { "\0" };
//        char mo[3] = { "\0" };
//        char ye[5] = { "\0" };
//
//        da[0] = d[0];
//        da[1] = d[1];
//
//        mo[0] = d[3];
//        mo[1] = d[4];
//
//        if (d[2] != '/' || d[5] != '/' || atoi(da) > 31 || atoi(mo) > 12 || atoi(da) < 1 || atoi(mo) < 1)
//        {
//            return false;
//        }
//
//        return true;
//    }
//
//    bool operator>(const Date& other)
//    {
//        if (this->year > other.year)
//        {
//            return true;
//        }
//        else if (this->year == other.year)
//        {
//
//            if (this->month > other.month)
//            {
//                return true;
//            }
//            else if (this->day > other.day && this->month == other.month)
//            {
//
//                return true;
//
//            }
//
//        }
//
//        return false;
//
//    }
//
//    bool operator<(const Date& other)
//    {
//        if (this->year < other.year)
//        {
//            return true;
//        }
//        else if (this->year == other.year)
//        {
//
//            if (this->month < other.month)
//            {
//                return true;
//            }
//            else if (this->day < other.day && this->month == other.month)
//            {
//
//                return true;
//
//            }
//
//        }
//
//        return false;
//
//    }
//
//};
//
//
//int extract_Last_4_Digits(const string& employeeID)
//{
//
//    string last4DigitsStr = employeeID.substr(employeeID.size() - 4);
//
//    return stoi(last4DigitsStr);
//}
//
//class Person {
//protected:
//    string name;
//    int age;
//    char gender;
//
//
//public:
//    Person(const string& name, int age, char gender)
//        : name(name), age(age), gender(gender) {}
//
//    Person()
//    {
//        name = "\0";
//        age = -1;
//        gender = '\0';
//    }
//    virtual void displayInfo() const {
//        cout << "Name: " << name << "\n";
//        cout << "Age: " << age << "\n";
//    }
//
//    string get_name()
//    {
//        return name;
//    }
//
//    int get_age()
//    {
//        return age;
//    }
//
//    char get_gender()
//    {
//        return gender;
//    }
//
//    virtual ~Person() {}
//};
//
//// Child class for Employee
//class Employee : public Person {
//protected:
//    string employeeId;
//
//
//public:
//
//
//    Employee(const string& name, int age, string& employeeId, char gender)
//        : Person(name, age, gender), employeeId(employeeId) {}
//
//
//    Employee()
//    {
//
//    }
//
//    Employee& operator=(const Employee& other)
//    {
//
//        if (this != &other)
//        {
//
//            // Avoid self-assignment
//            name = other.name;
//            age = other.age;
//            gender = other.gender;
//            employeeId = other.employeeId;
//            // Add other data members as needed
//
//        }
//
//        return *this;
//
//    }
//
//    string retid()
//    {
//        if (employeeId[0] == '\n')
//        {
//            for (int i = 0; i < employeeId.size() - 1; i++)
//            {
//                employeeId[i] = employeeId[i + 1];
//            }
//
//            employeeId.pop_back();
//
//        }
//
//        return this->employeeId;
//    }
//
//    void displayInfo() const override
//    {
//        Person::displayInfo();
//        cout << "Employee ID: " << employeeId << "\n";
//    }
//
//    void setID(string eid)
//    {
//        employeeId = eid;
//    }
//
//    virtual void displayBasic()
//    {
//
//    }
//
//    virtual void display_portal()
//    {
//
//    }
//
//    virtual void add_comp_pointers(Complain* cp)//adding all complains' pointers staff assigned to staff in list
//    {
//
//    }
//    virtual void addforReview(string)
//    {
//
//    }
//
//    virtual void addforFeedback(string) {
//
//    }
//
//};
//
//class Complain
//{
//
//private:
//
//    int status;  // 0 for new  1 for assigned 2 for resolved 3 for closed
//
//
//    string dateRecorded; // when complain is filed
//    string dateAssigned;
//
//
//    Employee** emp;
//
//    string feedback; // when problem is in status 2 then a teacher can give feedback 
//
//    string id; // id for a complain 
//
//    string issue; // issue teacher faced
//
//    int empAss; //total employees assigned for one complain
//
//    string teachid;
//
//
//public:
//
//
//    Complain(const int status, string dateRecorded, string dateAssigned, string id, string issue, string feedback, Employee** e, int empass)
//        : status(status), dateRecorded(dateRecorded), dateAssigned(dateAssigned), id(id), issue(issue), feedback(feedback), empAss(empass)
//    {
//
//
//
//    }
//
//
//    Complain(string Cid, string tId)
//    {
//
//        id = Cid;
//        teachid = tId;
//
//    }
//
//    Complain()
//    {
//        emp = 0;
//        empAss = 0;
//        status = -1;
//
//        feedback = "pending";
//        dateRecorded = dateAssigned = "";
//    }
//
//    int getStatus()
//    {
//        return status;
//    }
//
//    void setdateassigned(string d)
//    {
//        dateAssigned = d;
//    }
//    Complain& operator=(const Complain& other)
//    {
//
//        if (this != &other)// Avoid self-assignment
//        {
//
//
//            status = other.status;
//            dateAssigned = other.dateAssigned;
//            dateRecorded = other.dateRecorded;
//            feedback = other.feedback;
//            id = other.id;
//            issue = other.issue;
//            emp = new Employee * [empAss + 2];
//
//            for (int i = 0; i < (empAss + 2); i++)
//            {
//                emp[i] = other.emp[i];
//            }
//            // Add other data members as needed
//
//        }
//
//        return *this;
//
//    }
//
//    void printInitial()
//    {
//
//        cout << "Teacher id is " << teachid << endl;
//        cout << "Complain id is " << id << endl;
//
//
//    }
//
//    void setInitial(string tid, string CId)
//    {
//
//        id = CId;
//        teachid = tid;
//
//    }
//
//    void setstatus(int st)
//    {
//        status = st;
//    }
//
//    void setid(string id)
//    {
//
//        this->id = id;
//
//    }
//
//    string retstatus(int status)
//    {
//
//        if (status == 0)
//        {
//            return "new";
//        }
//        else if (status == 1)
//        {
//            return "assigned";
//        }
//        else if (status == 2)
//        {
//            return "resolved";
//        }
//        else if (status == 3)
//        {
//            return "closed";
//        }
//
//    }
//
//    // Display complain information
//    void displayInfo() const {
//
//        cout << "ID of complain is " << id << endl;
//        cout << "Current status of complain is " << status << endl;
//
//        cout << "Description of problem is " << issue << endl;
//        cout << "Information of Teacher who filed this complain is ";
//
//        emp[0]->displayInfo();
//        cout << endl;
//
//        cout << "Date at which this complain was recorded is " << dateRecorded << endl;
//        cout << "Information of Manager dealing with this complain is ";
//        emp[1]->displayInfo();
//
//        cout << "Date at which this complain was assigned by the manager is " << dateAssigned << endl;
//        cout << "Information of Employees dealing with this complain is ";
//
//        for (int i = 0; i < empAss; i++)
//        {
//            emp[i + 2]->displayInfo();
//            cout << endl;
//        }
//
//
//        cout << endl;
//
//
//    }
//
//    void setInfo(string& Cid, string& tid, string& Drecord, int status, string& description, string& feedback, string& Dassigned, Employee** e, int size)
//    {
//
//        this->status = status;  // 0 for new, 1 for assigned, 2 for resolved, 3 for closed
//
//        // Assuming Date is a class or structure, make sure to define it or replace with std::string
//        this->dateRecorded = Drecord; // when the complaint is filed
//        this->dateAssigned = Dassigned;
//
//        this->feedback = feedback; // when the problem is in status 2, then a teacher can give feedback
//        this->id = Cid; // id for a complaint
//        this->issue = description; // the issue the teacher faced
//
//        this->teachid = tid;
//        empAss = size - 2;
//
//
//        emp = new Employee * [size];
//
//        for (int i = 0; i < size; i++)
//        {
//
//            emp[i] = e[i];
//
//        }
//
//
//    }
//
//    void displayInfoforStaff()
//    {
//        cout << "Complain id is " << this->id << endl;
//        cout << "Status of complain is " << this->retstatus(this->status) << endl;
//        cout << "Description of the complain is " << this->issue << endl;
//        cout << "Date Recorded for complain is " << this->dateRecorded << endl;
//        cout << "Assigned Date for complain is " << this->dateAssigned << endl;
//
//
//        if (feedback != "\0")
//        {
//            cout << "Feedback of teacher against complain solved is " << this->feedback << endl;
//        }
//    }
//    void displayInfoforTeacher()
//    {
//        cout << "Complain id is " << this->id << endl;
//        cout << "Status of complain is " << this->retstatus(this->status) << endl;
//        cout << "Description of the complain is " << this->issue << endl;
//        cout << "Recorded Date for Complain is " << this->dateRecorded << endl;
//        cout << "Assigned Date for Complain is " << this->dateAssigned << endl;
//    }
//
//    void displayInfoforDirector()//director
//    {
//        cout << "Complain id is " << this->id << endl;
//        cout << "Status of complain is " << this->retstatus(this->status) << endl;
//    }
//
//    void displayInfoforManager()
//    {
//        cout << "Complain id is " << this->id << endl;
//
//        cout << "ID of Teacher who filed this complain is " << emp[0]->retid() << endl;
//        cout << "Information of employees assigned to solve this complain are " << endl;
//
//        for (int i = 2; i < empAss + 2; i++)
//        {
//            cout << "" << i - 1 << ")";
//            if (emp[i] == nullptr)
//            {
//                cout << "Employee not available" << endl;
//            }
//            else
//            {
//                emp[i]->displayBasic();
//            }
//        }
//        cout << "Status of complain is " << this->retstatus(this->status) << endl;
//        cout << "Description of the complain is " << this->issue << endl;
//        if (feedback != "\0")
//        {
//            cout << "Feedback of teacher against complain solved is " << this->feedback << endl;
//        }
//        cout << "Recorded Date for Complain is " << this->dateRecorded << endl;
//        cout << endl << endl;
//    }
//
//    void addStaff(Employee** e, int n)
//    {
//        Employee** em = new Employee * [n + 2];
//        for (int i = 0; i < n + 2; i++)
//        {
//            em[i] = new Employee();
//        }
//        em[0] = emp[0];
//        em[1] = emp[1];
//        empAss = n;
//        for (int i = 2; i < n + 2; i++)
//        {
//            em[i] = e[i - 2];
//        }
//
//
//        emp = new Employee * [n + 2];
//        for (int i = 0; i < n + 2; i++)
//        {
//            emp[i] = new Employee();
//        }
//        for (int i = 0; i < empAss + 2; i++)
//        {
//            emp[i] = em[i];
//        }
//
//        for (int i = 2; i < empAss + 2; i++)// adding the complain to assigned staff 
//        {
//            emp[i]->add_comp_pointers(this);
//        }
//
//        delete[] em;// added delete last
//        delete[] e;//added delete last
//
//        em = nullptr;
//        e = nullptr;
//
//    }
//
//    Employee* getTeacher()
//    {
//        return this->emp[0];
//    }
//
//    string getID()
//    {
//        return id;
//    }
//
//    int get_status()
//    {
//        return status;
//    }
//
//    string get_date_Rec()
//    {
//        return dateRecorded;
//    }
//
//    string get_date_Assign()
//    {
//        return dateAssigned;
//    }
//
//    string get_feedback()
//    {
//        return feedback;
//    }
//
//    void set_feedback(string f)
//    {
//        feedback = f;
//    }
//
//    string get_cid()
//    {
//        return id;
//    }
//
//    string get_issue()
//    {
//        return issue;
//    }
//
//    int get_empAss()
//    {
//        return empAss;
//    }
//
//    string get_teachid()
//    {
//        return teachid;
//    }
//
//    Employee** get_emp()
//    {
//        return emp;
//    }
//
//
//    void setBasic(Teacher* t, Employee* e, string Cid, string Tid, int status, string description, string);
//
//
//    ~Complain()
//    {
//
//    }
//};
//
//
//
//
//
//// Child class for Manager
//class Manager : public Employee
//{
//private:
//
//    staff_departments* sd;
//
//    vector<string> reviews;
//    int forReview;
//
//public:
//
//    Manager(const string& name, int age, string employeeId, char gender, staff_departments* td)
//        : Employee(name, age, employeeId, gender)
//
//    {
//
//        this->sd = td;
//        forReview = 0;
//
//    }
//
//
//    void displayInfo() const override
//    {
//
//        cout << "Manager Information:\n";
//
//        Employee::displayInfo();
//
//        cout << "Role: Manager\n";
//
//    }
//
//
//    Manager& operator=(const Manager& other)
//    {
//
//        if (this != &other) // Avoid self-assignment
//        {
//
//            name = other.name;
//            age = other.age;
//            gender = other.gender;
//            employeeId = other.employeeId;
//
//
//            this->sd = other.sd;
//            // Add other data members as needed
//        }
//
//        return *this;
//
//    }
//
//    void addforReview(string cid)
//    {
//        cout << endl;
//        cout << "Manager was Notified that you completed the Task. He will review your work and your system will be updated whether he approved the work or not" << endl;
//
//        reviews.push_back(cid);
//        forReview += 1;
//    }
//
//    bool displayPending()
//    {
//        if (forReview != 0)
//        {
//
//            for (const auto& str : reviews) {
//                cout << "Id of complain is " << str << endl;
//            }
//            return true;
//        }
//        return false;
//    }
//
//    bool ApprovePending();
//    void display_portal();
//    void assignEmployee(string);
//
//    void Remove(string cid)
//    {
//        string elementToRemove = cid;
//        auto it = reviews.begin();
//        while (it != reviews.end()) {
//            if (*it == elementToRemove) {
//                // Erasing the element
//                it = reviews.erase(it);
//            }
//            else {
//                ++it;
//            }
//        }
//
//        forReview = forReview - 1;
//    }
//
//    void update_info(string na, int ag, char g)//name,age,gender
//    {
//        this->name = na;
//        this->age = ag;
//        this->gender = g;
//
//    }
//
//
//    ~Manager()
//    {
//
//    }
//};
//
//
//// Child class for Teacher
//class Teacher : public Employee
//{
//private:
//
//    int noofcomplainFiled;
//
//    list<Complain*> comp_filed;
//
//    vector<string>giveFeedback;
//    int feedbackLeft;
//
//public:
//
//    Teacher(const string& name, int age, string employeeId, char gender)
//        : Employee(name, age, employeeId, gender)
//    {
//        noofcomplainFiled = 0;
//    }
//
//    void displayInfo() const override
//    {
//
//        cout << "Teacher Information:\n";
//        Employee::displayInfo();
//
//        cout << "Role: Teacher\n";
//
//        cout << "Total Complains filed are " << noofcomplainFiled << endl;
//
//        for (Complain* complain : comp_filed)
//        {
//            if (complain)
//            {
//                complain->printInitial();
//            }
//            else
//            {
//                // Handle the case where the pointer is null (optional)
//                cout << "Null pointer in comp_filed list." << endl;
//            }
//        }
//
//
//        cout << endl;
//
//    }
//
//    void add_comp_pointers(Complain* cp)//adding all complains' pointers teacher filed in list
//    {
//
//        comp_filed.push_back(cp);
//
//        ++noofcomplainFiled;
//
//    }
//
//    void display_complaints()
//    {
//
//        for (list<Complain*>::iterator it = comp_filed.begin(); it != comp_filed.end(); ++it)
//        {
//
//            (*it)->displayInfo();
//
//        }
//
//    }
//    void displayBasic()
//    {
//        Employee::displayBasic();
//    }
//    int get_no_of_complains()
//    {
//        return noofcomplainFiled;
//    }
//
//    void display_portal()
//    {
//      
//        while (1)
//        {
//            system("cls");
//            cout << "\t\t\t\tWELCOME TEACHER" << endl << endl << endl;
//
//            int choice;
//            cout << "Press 1 to view your complains and status " << endl;
//            cout << "Press 2 to file a new complain " << endl;
//            cout << "Press 3 to Give feedback for those complains which have been solved by the dept" << endl;
//            cout << "Press 4 to exit" << endl;
//
//            cin >> choice;
//            if (choice == 1)
//            {
//                if (comp_filed.empty())
//                {
//                    cout << "No complains filed yet " << endl;
//                }
//                else
//                {
//                    for (list<Complain*>::iterator it = comp_filed.begin(); it != comp_filed.end(); ++it)
//                    {
//
//                        (*it)->displayInfoforTeacher();
//
//                    }
//                }
//            }
//            else if (choice == 2)
//            {
//                //file a complain function
//                this->fileComplain();
//              
//
//            }
//            else if (choice == 3)
//            {
//                if (feedbackLeft > 0)
//                {
//                    for (const auto& str : giveFeedback) {
//                        cout << "Id of complain against which feedback is pending " << str << endl;
//                    }
//
//                    GiveFeedback();
//                }
//                else
//                    cout << "No complain avaailable for feedback" << endl;
//            }
//
//            else if (choice == 4)
//            {
//                cout << "Exiting" << endl;
//                break;
//            }
//
//            std::this_thread::sleep_for(std::chrono::seconds(5));
//        }
//    }
//
//    void addforFeedback(string cid)
//    {
//        this->giveFeedback.push_back(cid);
//        feedbackLeft++;
//    }
//    Complain* fileComplain();
//
//    void GiveFeedback();
//    void Remove(string cid)
//    {
//        string elementToRemove = cid;
//        auto it = giveFeedback.begin();
//        while (it != giveFeedback.end()) {
//            if (*it == elementToRemove) {
//                // Erasing the element
//                it = giveFeedback.erase(it);
//            }
//            else {
//                ++it;
//            }
//        }
//        feedbackLeft = feedbackLeft - 1;;
//    }
//
//
//};
//
//
//// Child class for Staff
//class Staff : public Employee
//{
//private:
//    list<Complain*> comp_assigned;
//
//public:
//
//    Staff(const string& name, int age, string employeeId, char gender)
//        : Employee(name, age, employeeId, gender)
//    { }
//
//
//    void displayInfo() const override
//    {
//
//        cout << "Staff Information:\n";
//        Employee::displayInfo();
//        cout << "Role: Staff\n";
//
//    }
//
//    void add_comp_pointers(Complain* cp)//adding all complains' pointers staff assigned to staff in list
//    {
//        cout << employeeId << endl;
//        comp_assigned.push_back(cp);
//
//    }
//
//    void displayBasic()
//    {
//        cout << "ID is " << this->employeeId << endl;
//        Person::displayInfo();
//    }
//    void display_complaints()
//    {
//
//        for (list<Complain*>::iterator it = comp_assigned.begin(); it != comp_assigned.end(); ++it)
//        {
//
//            (*it)->displayInfo();
//
//        }
//
//    }
//
//    void display_portal()
//    {
//      
//        int choice;
//        
//        while (1)
//        {
//          
//            system("cls");
//            cout << "\t\t\t\tWELCOME STAFF" << endl << endl;
//            cout << "Press 1 to see the assigned complains and status " << endl;
//            cout << "Press 2 To work on a complain " << endl;
//            cout << "Press 3 to exit" << endl;
//            cin >> choice;
//            if (choice == 1)
//            {
//                if (comp_assigned.empty())
//                {
//                    cout << "No complains Assigned" << endl;
//                }
//                else
//                {
//                    for (list<Complain*>::iterator it = comp_assigned.begin(); it != comp_assigned.end(); ++it)
//                    {
//
//                        (*it)->displayInfoforStaff();
//
//
//                    }
//                }
//            }
//            else if (choice == 2)
//            {
//                int opt = 0;
//                string id;
//                for (list<Complain*>::iterator it = comp_assigned.begin(); it != comp_assigned.end(); ++it)
//                {
//                    if ((*it)->getStatus() == 1)
//                    {
//                        (*it)->displayInfoforStaff();
//                        opt++;
//                    }
//
//                }
//
//                if (opt > 0)
//                {
//                    cout << "Enter id of complain you want to work on" << endl;
//                    cin >> id;
//                    doWork(id);
//                }
//                else
//                {
//                    cout << "No complains assigned" << endl;
//                }
//
//            }
//            else if (choice == 3)
//            {
//                cout << "Exiting" << endl;
//                break;
//
//
//            }
//            std::this_thread::sleep_for(std::chrono::seconds(5));
//
//
//        }
//    }
//
//    void doWork(string id);
//};
//
//
//void Complain::setBasic(Teacher* t, Employee* e, string Cid, string Tid, int status, string description, string dateR)
//{
//    this->id = Cid;
//    this->teachid = Tid;
//    this->issue = description;
//    this->status = status;
//    /* this->emp[0] = t;*/
//    emp = new Employee * [2];
//    emp[0] = t;
//    emp[1] = e;
//
//    t = nullptr;//added last
//    e = nullptr;//added last
//
//    this->dateRecorded = dateR;
//}
//
//
//class Department
//{
//protected:
//
//    string ID;
//    string name;
//    int numberOfEmployees;
//    Employee** emp;
//
//
//
//public:
//
//    Department(const string& name, int numberOfEmployees)
//        : name(name), numberOfEmployees(numberOfEmployees)
//    {
//        emp = new Employee * [numberOfEmployees];
//
//    }
//
//    Department(const string& name, const string& id)
//        : name(name), ID(id)
//    {
//
//        emp = 0;
//
//        numberOfEmployees = 0;
//
//    }
//
//
//    Department& operator=(const Department& other)
//    {
//
//        if (this != &other)// Avoid self-assignment
//        {
//
//            name = other.name;
//            numberOfEmployees = other.numberOfEmployees;
//            ID = other.ID;
//
//            emp = new Employee * [numberOfEmployees];
//
//            for (int i = 0; i < numberOfEmployees; i++)
//            {
//                this->emp[i] = other.emp[i];
//            }
//
//            // Add other data members as needed
//        }
//
//        return *this;
//
//    }
//
//    virtual  void NotifyManager(string)
//    {
//
//    }
//
//    string get_Dept_name()
//    {
//        return name;
//    }
//
//    void setNoOFemployees(int no)
//    {
//
//        numberOfEmployees = no;
//
//    }
//
//    int getTotalEmp()
//    {
//        return numberOfEmployees;
//    }
//
//    Employee* returnEmp(string id)
//    {
//
//        for (int i = 0; i < numberOfEmployees; i++)
//        {
//
//            if (emp[i]->retid() == id)
//                return emp[i]; // return object whose id is matched
//
//        }
//
//        return nullptr;
//
//    }
//    bool checkExistence(string id)
//    {
//
//        for (int i = 0; i < numberOfEmployees; i++)
//        {
//
//
//            if (emp[i]->retid() == id)
//                return true; // return object whose id is matched
//
//        }
//        return false;
//
//
//    }
//
//    virtual void displayInfo() const
//    {
//
//
//        cout << "Department: " << name << "\n";
//        cout << "Number of Employees: " << numberOfEmployees << "\n";
//
//        cout << "Information of employee" << endl;
//        for (int i = 0; i < numberOfEmployees; i++)
//        {
//            emp[i]->displayInfo();
//            cout << endl;
//        }
//
//        cout << endl;
//
//
//    }
//
//    Employee* retuManager()
//    {
//        return emp[0];
//    }
//
//
//    virtual void loadData()
//    {
//
//    }
//
//    virtual void upload_data_to_file()
//    {
//
//    }
//
//    virtual string retID()
//    {
//        return "";
//    }
//
//    virtual Complain* fileComplain(Teacher* t, string, string, string, int)
//    {
//        return nullptr;
//    }
//
//
//    virtual ~Department()
//    {
//        if (emp != nullptr)
//        {
//
//            for (int i = 0; i < numberOfEmployees; i++)
//            {
//                delete emp[i];
//            }
//
//        }
//
//        delete[] emp;
//    }
//};
//
//
//class Teaching_departments : public Department
//{
//protected:
//
//public:
//    Teaching_departments(const string& n, const string& id)
//        :Department(n, id)
//    {
//
//    }
//
//    string retID()
//    {
//        return this->ID;
//    }
//    void loadData()
//    {
//
//        FILE* file;
//
//
//        char f_name[7] = "\0";
//
//        f_name[0] = ID[0];
//        f_name[1] = ID[1];
//        strcat_s(f_name, ".txt");
//
//
//        if (fopen_s(&file, f_name, "r") != 0)
//        {
//
//            std::cerr << "Error opening the file.\n";
//            return;
//
//        }
//
//
//        // Read the number of teachers
//        int numTeachers;
//
//        fscanf_s(file, "%d\n", &numTeachers);
//        setNoOFemployees(numTeachers);
//
//
//        // Allocate memory for Employee objects
//        emp = new Employee * [numTeachers];
//
//
//        // Loop to read teacher data until the end of the file
//        for (int count = 0; count < numTeachers; ++count)
//        {
//
//            // Variables to store the temporary employee data
//            char emp_i[100] = "\0";  // Adjust the size as needed
//            char emp_n[100] = "\0";  // Adjust the size as needed
//            int emp_age;
//            char emp_gender;
//
//
//            fscanf_s(file, "%[^;];%[^;];%d;%c\n", emp_i, sizeof(emp_i), emp_n, sizeof(emp_n), &emp_age, &emp_gender, sizeof(emp_gender));
//
//            string emp_name(emp_n);
//            string emp_id(emp_i);
//
//
//
//
//            // Create an Employee object and store it in the array
//            emp[count] = new Teacher(emp_name, emp_age, emp_id, emp_gender);
//
//
//        }
//
//        // Close the file
//        fclose(file);
//    }
//
//    void Display_all_Teachers()
//    {
//
//        cout << "Total teachers in this department are " << numberOfEmployees << endl << "Teahcers' info is: \n";
//        for (int i = 0; i < numberOfEmployees; i++)
//        {
//            emp[i]->displayInfo();
//        }
//
//        cout << endl;
//
//    }
//
//    void upload_data_to_file()
//    {
//        FILE* file;
//
//
//        char f_name[7] = "\0";
//
//        f_name[0] = ID[0];
//        f_name[1] = ID[1];
//        strcat_s(f_name, ".txt");
//
//
//        if (fopen_s(&file, f_name, "w") != 0)
//        {
//
//            std::cerr << "Error opening the file.\n";
//            return;
//
//        }
//
//        fprintf_s(file, "%d\n", numberOfEmployees);
//
//        int i = 0;
//
//        for (i = 0; i < numberOfEmployees - 1; i++)
//        {
//
//            fprintf_s(file, "%s;%s;%d;%c\n", emp[i]->retid().c_str(), emp[i]->get_name().c_str(), emp[i]->get_age(), emp[i]->get_gender());
//
//        }
//
//
//        fprintf_s(file, "%s;%s;%d;%c", emp[i]->retid().c_str(), emp[i]->get_name().c_str(), emp[i]->get_age(), emp[i]->get_gender());
//
//
//    }
//
//    void add_new_Teacher(string na, int ag, char gen)//name,age,gender
//    {
//
//        int maxLast4Digits = 0;
//
//        for (int i = 0; i < numberOfEmployees; i++)
//        {
//            const string& id = emp[i]->retid();
//
//            int last4Digits = extract_Last_4_Digits(id);//returning int value
//
//            maxLast4Digits = std::max(maxLast4Digits, last4Digits);
//
//        }
//
//        // Increment the maximum value by 1 for the new employee ID
//        ++maxLast4Digits;
//
//
//        //Converting last 4 digits to a string with leading zeros
//        string last4DigitsStr = std::to_string(maxLast4Digits);
//
//        string formattedLast4Digits = "0000" + last4DigitsStr; // Add leading zeros
//
//        formattedLast4Digits = formattedLast4Digits.substr(formattedLast4Digits.length() - 4); //Keeping the last 4 digits
//
//        string new_ID = formattedLast4Digits;
//
//        string D_id = retID();
//        D_id = D_id.substr(0, 2);
//
//        new_ID = D_id + "-" + new_ID;
//
//
//        Employee** e = new Employee * [numberOfEmployees + 1];
//
//        int k = 0;
//
//        for (k = 0; k < numberOfEmployees; k++)
//        {
//            e[k] = emp[k];
//
//
//        }
//
//        ++numberOfEmployees;
//        e[k] = new Teacher(na, ag, new_ID, gen);
//
//        delete[] emp;
//
//        emp = e;
//
//        e = nullptr;
//    }
//
//    void remove_a_Teacher(string S_id)
//    {
//
//        int c = -1;
//
//        for (int i = 0; i < numberOfEmployees; i++)
//        {
//
//            if (S_id == emp[i]->retid())
//            {
//                delete emp[i];
//
//                emp[i] = nullptr;
//
//                c = i;
//
//                i = numberOfEmployees;//too stop loop from further running
//            }
//
//        }
//
//        Employee** e = new Employee * [numberOfEmployees - 1];
//
//        int k = 0;
//
//        for (k = 0; k < numberOfEmployees - 1; k++)
//        {
//            if (k < c)
//            {
//
//                e[k] = emp[k];
//
//            }
//            else
//            {
//                e[k] = emp[k + 1];
//            }
//
//
//
//        }
//
//        --numberOfEmployees;
//
//        delete[] emp;
//
//        emp = e;
//
//        e = nullptr;
//
//    }
//
//    ~Teaching_departments() {}
//};
//
//
//
//class ComputerScienceDepartment : public Teaching_departments
//{
//private:
//
//    static ComputerScienceDepartment* instance;
//
//    ComputerScienceDepartment()
//        : Teaching_departments("Computer Science", "cs")
//    {
//
//    }
//
//
//public:
//
//    static ComputerScienceDepartment* getInstance();
//    ComputerScienceDepartment(const ComputerScienceDepartment&) = delete;
//    ComputerScienceDepartment& operator=(const ComputerScienceDepartment&) = delete;
//
//};
//ComputerScienceDepartment* ComputerScienceDepartment::instance = nullptr;
//
//ComputerScienceDepartment* ComputerScienceDepartment::getInstance() {
//    if (!instance) {
//        instance = new ComputerScienceDepartment();
//    }
//    return instance;
//}
//
//
//
//class ManagementDepartment : public Teaching_departments
//{
//private:
//    static ManagementDepartment* instance;
//
//    ManagementDepartment()
//        : Teaching_departments("Management", "mg")
//    {
//
//    }
//
//public:
//
//    static ManagementDepartment* getInstance();
//    ManagementDepartment(const ManagementDepartment&) = delete;
//    ManagementDepartment& operator=(const ManagementDepartment&) = delete;
//
//};
//
//ManagementDepartment* ManagementDepartment::instance = nullptr;
//
//ManagementDepartment* ManagementDepartment::getInstance() {
//    if (!instance) {
//        instance = new ManagementDepartment();
//    }
//    return instance;
//}
//
//
//
//class ElectricalEngineeringDepartment : public Teaching_departments
//{
//
//    static ElectricalEngineeringDepartment* instance;
//
//    ElectricalEngineeringDepartment()
//        : Teaching_departments("Electrical Engineering", "ee")
//    {
//
//    }
//
//public:
//
//    static ElectricalEngineeringDepartment* getInstance();
//    ElectricalEngineeringDepartment(const ElectricalEngineeringDepartment&) = delete;
//    ElectricalEngineeringDepartment& operator=(const ElectricalEngineeringDepartment&) = delete;
//
//};
//
//ElectricalEngineeringDepartment* ElectricalEngineeringDepartment::instance = nullptr;
//ElectricalEngineeringDepartment* ElectricalEngineeringDepartment::getInstance() {
//    if (!instance) {
//        instance = new ElectricalEngineeringDepartment();
//    }
//    return instance;
//}
//
//
//
//class staff_departments : public Department
//{
//protected:
//
//    int totalComplains;
//    list<Complain*> complains_filed;
//
//public:
//    staff_departments(const string& n, const string& id)
//        :Department(n, id)
//    {
//        totalComplains = 0;
//    }
//    string retID()
//    {
//        return this->ID;
//    }
//    staff_departments& operator=(const staff_departments& other)
//    {
//
//        if (this != &other)// Avoid self-assignment
//        {
//
//            name = other.name;
//            numberOfEmployees = other.numberOfEmployees;
//            ID = other.ID;
//
//
//            emp = new Employee * [numberOfEmployees];
//
//            for (int i = 0; i < numberOfEmployees; i++)
//            {
//                this->emp[i] = other.emp[i];
//            }
//
//            totalComplains = other.totalComplains;
//            complains_filed = other.complains_filed;
//
//            // Add other data members as needed
//        }
//
//        return *this;
//
//    }
//    void loadData()
//    {
//        Complain** comp;
//
//        FILE* file;
//
//        char f_name[7] = "\0";
//
//        f_name[0] = ID[0];
//        f_name[1] = ID[1];
//        strcat_s(f_name, ".txt");
//
//        if (fopen_s(&file, f_name, "r") != 0) {
//            std::cerr << "Error opening the file.\n";
//            return;
//        }
//
//
//        // Read the number of employees
//        int numEmployees;
//        fscanf_s(file, "%d", &numEmployees);
//        setNoOFemployees(numEmployees);
//
//
//        // Dynamic allocation of Employee array
//        emp = new Employee * [numEmployees];
//
//        // Variables to store temporary employee data
//        char emp_id[100] = "\0";  // Adjust the size as needed
//        char emp_name[100] = "\0";  // Adjust the size as needed
//        int emp_age;
//        char emp_gender;
//
//
//        // Loop to read employee data
//        for (int i = 0; i < numEmployees; ++i)
//        {
//
//            fscanf_s(file, "%[^;];%[^;];%d;%c\n", emp_id, sizeof(emp_id), emp_name, sizeof(emp_name), &emp_age, &emp_gender, sizeof(emp_gender));
//
//            // Create an Employee object and do whatever you need with the data
//            std::string name(emp_name);
//            std::string id(emp_id);
//
//            // Process the Employee object as needed (e.g., print details)
//            if (i == 0)
//            {
//                emp[i] = new Manager(name, emp_age, id, emp_gender, this);
//
//            }
//            else
//            {
//
//                emp[i] = new Staff(name, emp_age, id, emp_gender);
//
//            }
//
//        }
//
//
//        while (fgetc(file) != '\n');
//
//
//        // Read the number of complaints
//        int numComplaints;
//        fscanf_s(file, "\n%d\n", &numComplaints);
//        setComplains(numComplaints);
//
//
//        comp = new Complain * [numComplaints]; //previously +2 was here
//
//        // Variables to store temporary complaint data
//        char complaint_id[100] = "\0";  // Adjust the size as needed
//        char employee_id[100] = "\0";  // Adjust the size as needed
//        char date_assigned[100] = "\0";  // Adjust the size as needed
//        int status = -1;
//        char description[100] = "\0";  // Adjust the size as needed
//        char feedback_place[100] = "\0";  // Adjust the size as needed
//        char date_solved[100] = "\0";  // Adjust the size as needed
//        int numEmployeesAssigned = 0;
//
//
//        // Loop to read complaint data
//        for (int i = 0; i < numComplaints; ++i)
//        {
//
//            fscanf_s(file, "%[^;];%[^;];%[^;];%d;%[^;];%[^;];%[^;];%d;",
//                complaint_id, sizeof(complaint_id),
//                employee_id, sizeof(employee_id),
//                date_assigned, sizeof(date_assigned),
//                &status, description, sizeof(description),
//                feedback_place, sizeof(feedback_place),
//                date_solved, sizeof(date_solved),
//                &numEmployeesAssigned);
//
//
//            string str_complaint_id(complaint_id);
//            string str_employee_id(employee_id);
//            string str_date_record(date_assigned);
//            string str_description(description);
//            string str_feedback_place(feedback_place);
//            string str_date_assign(date_solved);
//
//
//            Employee** ass = new Employee * [numEmployeesAssigned + 2];// it will also contain the teacher and manager
//            cout << employee_id << complaint_id << endl;
//
//            ass[0] = findTeachDept(employee_id);
//
//            ass[1] = emp[0]; // manager of dept info at first index 
//
//            if (numEmployeesAssigned == 0)
//            {
//                fscanf_s(file, "\n");
//            }
//
//            int j;
//
//            // Process employee IDs assigned to the complaint
//            for (j = 0; j < numEmployeesAssigned - 1; ++j)
//            {
//
//                char assigned_employee_id[100] = "\0";  // Adjust the size as needed
//
//                fscanf_s(file, "%[^;];", assigned_employee_id, sizeof(assigned_employee_id));
//
//
//                ass[j + 2] = returnEmp(assigned_employee_id);
//
//            }
//
//
//            if (numEmployeesAssigned > 0)
//            {
//                char assigned_employee_id[100] = "\0";  // Adjust the size as needed
//
//                fscanf_s(file, "%[^\n]\n", assigned_employee_id, sizeof(assigned_employee_id));
//
//
//                ass[j + 2] = returnEmp(assigned_employee_id);
//
//            }
//
//
//
//            Teacher* t = dynamic_cast<Teacher*>(ass[0]);
//
//            comp[i] = new Complain();
//
//            comp[i]->setInfo(str_complaint_id, str_employee_id, str_date_record, status, str_description, str_feedback_place, str_date_assign, ass, numEmployeesAssigned + 2);
//
//            t->add_comp_pointers(comp[i]);//adding complaint pointer in related teahcer's object
//            if (comp[i]->getStatus() == 2)
//            {
//                t->addforFeedback(comp[i]->getID());
//            }
//
//            for (int n = 0; n < numEmployeesAssigned; n++)
//            {
//                Staff* s = dynamic_cast<Staff*>(ass[n + 2]);
//
//                s->add_comp_pointers(comp[i]);//adding complaint pointer in relavent staff member's object
//
//            }
//
//        }
//
//
//        for (int i = 0; i < numComplaints; i++)
//        {
//
//            complains_filed.push_back(comp[i]);
//
//        }
//
//        delete[] comp;//releasing memory use by comp but not complaint objects;
//
//        // Close the file
//        fclose(file);
//
//        // Clean up dynamically allocated memory
//
//    }
//
//
//    void upload_data_to_file()
//    {
//        FILE* file;
//
//
//        char f_name[7] = "\0";
//
//        f_name[0] = ID[0];
//        f_name[1] = ID[1];
//        strcat_s(f_name, ".txt");
//
//
//        if (fopen_s(&file, f_name, "w") != 0)
//        {
//
//            std::cerr << "Error opening the file.\n";
//            return;
//
//        }
//
//
//
//        fprintf_s(file, "%d\n", numberOfEmployees);
//
//        for (int i = 0; i < numberOfEmployees; i++)
//        {
//
//            fprintf_s(file, "%s;%s;%d;%c\n", emp[i]->retid().c_str(), emp[i]->get_name().c_str(), emp[i]->get_age(), emp[i]->get_gender());
//
//        }
//
//        fprintf_s(file, "!\n");
//
//
//        fprintf_s(file, "%d\n", totalComplains);
//
//        int check = 0;
//
//        for (list<Complain*>::iterator it = complains_filed.begin(); it != complains_filed.end(); ++it)
//        {
//            ++check;
//
//            int n = (*it)->get_empAss();
//
//            fprintf_s(file, "%s;%s;%s;%d;%s;%s;%s;%d;", (*it)->get_cid().c_str(),
//                (*it)->get_teachid().c_str(),
//                (*it)->get_date_Rec().c_str(),
//                (*it)->get_status(),
//                (*it)->get_issue().c_str(),
//                (*it)->get_feedback().c_str(),
//                (*it)->get_date_Assign().c_str(),
//                n);
//
//
//            Employee** e = (*it)->get_emp();
//
//
//            int k = 0;
//
//            for (k = 0; k < n - 1; k++)
//            {
//                fprintf_s(file, "%s;", e[k + 2]->retid().c_str());
//
//            }
//
//            if (n > 0 && check < totalComplains)
//            {
//
//                fprintf_s(file, "%s\n", e[k + 2]->retid().c_str());
//
//            }
//            else if (n > 0 && check == totalComplains)
//            {
//
//                fprintf_s(file, "%s", e[k + 2]->retid().c_str());
//
//            }
//            else if (n == 0 && check < totalComplains)
//            {
//                fprintf_s(file, "\n");
//            }
//            else
//            {
//                //do nothing end of file
//            }
//
//            delete[] e;
//        }
//
//
//    }
//
//
//    void display_comps_within_range(Date st, Date ed)//for director use summary
//    {
//
//
//        for (list<Complain*>::iterator it = complains_filed.begin(); it != complains_filed.end(); ++it)
//        {
//            Date d((*it)->get_date_Rec());
//
//            if (st < d && ed > d)
//            {
//                cout << "This complain was filed in this department: " << Department::get_Dept_name() << "\nTotal complains received by this department is: " << totalComplains << "\n\n" << "\n Complain's summarized info is: \n" << endl;
//
//                (*it)->displayInfoforDirector();
//
//                cout << endl << endl;
//
//            }
//
//
//
//        }
//
//        cout << endl;
//
//
//
//    }
//
//    void display_summary_of_AllComplaints()
//    {
//        cout << "\nTotal complains received by this department is: " << totalComplains << "\n\n" << "\n Complains' summarized info is: \n" << endl;
//
//
//        for (list<Complain*>::iterator it = complains_filed.begin(); it != complains_filed.end(); ++it)
//        {
//
//            (*it)->displayInfoforDirector();
//
//
//        }
//
//        cout << endl;
//
//    }
//
//    bool get_complete_details(string C_id)//for director use
//    {
//
//
//        for (list<Complain*>::iterator it = complains_filed.begin(); it != complains_filed.end(); ++it)
//        {
//
//
//            if ((*it)->get_cid() == C_id)
//            {
//                cout << "\nHere is the complete information about the complain you requested. \n\n";
//
//                (*it)->displayInfo();
//
//                cout << endl;
//
//                return true;
//            }
//
//
//
//        }
//
//        return false;
//
//    }
//
//    void add_new_staff_member(string na, int ag, char gen)//name,age,gender
//    {
//
//        int maxLast4Digits = 0;
//
//        for (int i = 0; i < numberOfEmployees; i++)
//        {
//            const string& id = emp[i]->retid();
//
//            int last4Digits = extract_Last_4_Digits(id);//returning int value
//
//            maxLast4Digits = std::max(maxLast4Digits, last4Digits);
//
//        }
//
//        // Increment the maximum value by 1 for the new employee ID
//        ++maxLast4Digits;
//
//
//        //Converting last 4 digits to a string with leading zeros
//        string last4DigitsStr = std::to_string(maxLast4Digits);
//
//        string formattedLast4Digits = "0000" + last4DigitsStr; // Add leading zeros
//
//        formattedLast4Digits = formattedLast4Digits.substr(formattedLast4Digits.length() - 4); //Keeping the last 4 digits
//
//        string new_ID = formattedLast4Digits;
//
//        string D_id = retID();
//        D_id = D_id.substr(0, 2);
//
//        new_ID = D_id + "-" + new_ID;
//
//
//        Employee** e = new Employee * [numberOfEmployees + 1];
//
//        int k = 0;
//
//        for (k = 0; k < numberOfEmployees; k++)
//        {
//            e[k] = emp[k];
//
//
//        }
//
//        ++numberOfEmployees;
//        e[k] = new Staff(na, ag, new_ID, gen);
//
//        delete[] emp;
//
//        emp = e;
//
//        e = nullptr;
//    }
//
//    void remove_a_staff_member(string S_id)
//    {
//        int c = -1;
//
//        for (int i = 0; i < numberOfEmployees; i++)
//        {
//
//            if (S_id == emp[i]->retid())
//            {
//                delete emp[i];
//
//                c = i;
//
//                i = numberOfEmployees;//too stop loop from further running
//            }
//
//        }
//
//        Employee** e = new Employee * [numberOfEmployees - 1];
//
//        int k = 0;
//
//        for (k = 0; k < numberOfEmployees - 1; k++)
//        {
//            if (k < c)
//            {
//
//                e[k] = emp[k];
//
//            }
//            else
//            {
//                e[k] = emp[k + 1];
//            }
//
//
//
//        }
//
//        --numberOfEmployees;
//
//        delete[] emp;
//
//        emp = e;
//
//        e = nullptr;
//
//    }
//
//    void replace_a_manager(string na, int ag, char gen)//name,age,gender
//    {
//
//        Manager* m = dynamic_cast<Manager*>(emp[0]);
//
//        m->update_info(na, ag, gen);
//
//        m = nullptr;
//    }
//
//
//    void setComplains(int n)
//    {
//        totalComplains = n;
//    }
//
//    void displayInfo()
//    {
//
//        Department::displayInfo();
//
//        cout << "Total Complains filed are " << totalComplains << "\n Below is the list of all these complains: \n" << endl;
//
//        for (list<Complain*>::iterator it = complains_filed.begin(); it != complains_filed.end(); ++it)
//        {
//
//            (*it)->displayInfo();
//
//        }
//
//        cout << endl;
//    }
//
//    Employee* findTeachDept(string id)
//    {
//        string newString = id.substr(0, 2);
//
//        if (newString == "ee")
//        {
//
//            ElectricalEngineeringDepartment* ea = ElectricalEngineeringDepartment::getInstance();
//            return (ea->returnEmp(id));
//        }
//        if (newString == "cs")
//        {
//            ComputerScienceDepartment* cs = ComputerScienceDepartment::getInstance();
//            return (cs->returnEmp(id));
//        }
//        if (newString == "mg")
//        {
//            ManagementDepartment* m = ManagementDepartment::getInstance();
//
//            return (m->returnEmp(id));
//        }
//
//        return nullptr;
//    }
//    void displayFormanager()
//    {
//        for (list<Complain*>::iterator it = complains_filed.begin(); it != complains_filed.end(); ++it)
//        {
//
//            (*it)->displayInfoforManager();
//
//        }
//    }
//
//    bool resolveComplain(string id)
//    {
//
//        for (list<Complain*>::iterator it = complains_filed.begin(); it != complains_filed.end(); ++it)
//        {
//
//            if ((*it)->getID() == id)
//            {
//                if ((*it)->getStatus() == 1)
//                {
//                    (*it)->setstatus(2);
//                    return true;
//
//                }
//            }
//
//        }
//        return false;
//    }
//
//    bool CheckComplainExistenceandChangeStatus(string Cid)
//    {
//        for (list<Complain*>::iterator it = complains_filed.begin(); it != complains_filed.end(); ++it)
//        {
//
//            if ((*it)->getID() == Cid)
//            {
//                (*it)->setstatus(2);
//                return true;
//            }
//
//
//
//        }
//    }
//
//    Employee* ReturnTeacherAgainstComplainId(string Cid)
//    {
//        for (list<Complain*>::iterator it = complains_filed.begin(); it != complains_filed.end(); ++it)
//        {
//
//            if ((*it)->getID() == Cid)
//            {
//                Employee* e = (*it)->getTeacher();
//                return e;
//            }
//
//
//
//        }
//    }
//
//    void displayCids()
//    {
//        for (list<Complain*>::iterator it = complains_filed.begin(); it != complains_filed.end(); ++it)
//        {
//
//            cout << "id of complain is " << (*it)->getID() << endl;
//            cout << "status of complain is " << (*it)->getStatus() << endl;
//
//        }
//    }
//    int ValidCids()
//    {
//        int set = 0;
//        for (list<Complain*>::iterator it = complains_filed.begin(); it != complains_filed.end(); ++it)
//        {
//            if ((*it)->getStatus() == 0)
//            {
//                cout << "id of complain is " << (*it)->getID() << endl;
//                cout << "status of complain is " << (*it)->retstatus((*it)->getStatus()) << endl;
//                set = 1;
//                
//            }
//            
//
//        }
//        return set;
//        
//    }
//    Complain* fileComplain(Teacher* t, string Did, string teachID, string Description, int status)
//    {
//
//        int maxLast4Digits = 0;
//
//        for (list<Complain*>::iterator it = complains_filed.begin(); it != complains_filed.end(); ++it)
//        {
//            const string& id = (*it)->getID();
//
//            int last4Digits = extract_Last_4_Digits(id);//returning int value
//
//            maxLast4Digits = std::max(maxLast4Digits, last4Digits);
//
//        }
//
//        // Increment the maximum value by 1 for the new employee ID
//        ++maxLast4Digits;
//
//
//        //Converting last 4 digits to a string with leading zeros
//        string last4DigitsStr = std::to_string(maxLast4Digits);
//
//        string formattedLast4Digits = "0000" + last4DigitsStr; // Add leading zeros
//
//        formattedLast4Digits = formattedLast4Digits.substr(formattedLast4Digits.length() - 4); //Keeping the last 4 digits
//
//        string new_ID = formattedLast4Digits;
//
//
//        new_ID = "C" + Did + "-" + new_ID;
//
//        Complain* c = new Complain();
//        totalComplains += 1;
//
//        string d = new_ID;
//
//        auto currentTime = std::chrono::system_clock::now();
//
//        // Convert the time point to a time_t object
//        std::time_t currentTimeT = std::chrono::system_clock::to_time_t(currentTime);
//
//        // Convert the time_t to a tm structure using localtime_s
//        std::tm currentTm;
//        localtime_s(&currentTm, &currentTimeT);
//
//        // Format the date as dd/mm/yyyy
//        char buffer[11]; // Buffer to store the formatted date (10 characters + null terminator)
//        strftime(buffer, sizeof(buffer), "%d/%m/%Y", &currentTm);
//
//        // Print the formatted date
//
//        string dateRecorded(buffer);
//        c->setBasic(t, this->retuManager(), d, teachID, status, Description, dateRecorded);
//
//
//        complains_filed.push_back(c);
//
//
//
//        return c;
//    }
//
//    bool CheckComplainExistence(string Cid)
//    {
//        for (list<Complain*>::iterator it = complains_filed.begin(); it != complains_filed.end(); ++it)
//        {
//
//            if ((*it)->getID() == Cid)
//            {
//                return true;
//            }
//
//
//
//        }
//    }
//
//
//    void DisplayEmp()
//    {
//        for (int i = 1; i < numberOfEmployees; i++)
//        {
//            emp[i]->displayBasic();
//        }
//    }
//
//    void assign(string Cid, Employee** emp, int n)
//    {
//        Employee** e = new Employee * [n];
//        for (int i = 0; i < n; i++)
//        {
//            e[i] = new Employee();
//        }
//
//        for (list<Complain*>::iterator it = complains_filed.begin(); it != complains_filed.end(); ++it)
//        {
//
//            if ((*it)->getID() == Cid)
//            {
//                for (int i = 0; i < n; i++)
//                {
//                    e[i] = this->returnEmp(emp[i]->retid());
//                }
//                auto currentTime = std::chrono::system_clock::now();
//
//                // Convert the time point to a time_t object
//                std::time_t currentTimeT = std::chrono::system_clock::to_time_t(currentTime);
//
//                // Convert the time_t to a tm structure using localtime_s
//                std::tm currentTm;
//                localtime_s(&currentTm, &currentTimeT);
//
//                // Format the date as dd/mm/yyyy
//                char buffer[11]; // Buffer to store the formatted date (10 characters + null terminator)
//                strftime(buffer, sizeof(buffer), "%d/%m/%Y", &currentTm);
//
//                // Print the formatted date
//
//                string dateAssigned(buffer);
//                (*it)->setdateassigned(dateAssigned);
//                (*it)->addStaff(e, n);
//                (*it)->setstatus(1);
//                cout << "Complain has been assigned to staff " << endl;
//                //add staff of  complain send pointers of employees against assigned ids
//            }
//
//
//
//        }
//    }
//
//    bool checkIfsolved(string cid)
//    {
//        for (list<Complain*>::iterator it = complains_filed.begin(); it != complains_filed.end(); ++it)
//        {
//            if ((*it)->getID() == cid)
//            {
//                if ((*it)->getStatus() == 3)
//                {
//                    return false;
//                }
//                else
//                    return true;
//            }
//
//
//
//        }
//    }
//
//
//    void NotifyManager(string cid)
//    {
//
//        if (checkIfsolved(cid))// if its alrady closed can not work on it 
//        {
//            emp[0]->addforReview(cid);
//        }
//    }
//
//    ~staff_departments() override
//    {
//
//        // Clean up Complain objects in the list
//        for (auto complain : complains_filed)
//        {
//
//            delete complain;
//
//        }
//
//        complains_filed.clear(); // Clear the list after deletion
//    }
//
//
//};
//
//void Manager::display_portal()
//{
// 
//   
//    int choice;
//    while (1)
//    {
//        system("cls");
//        cout << "\t\t\t\tWELCOME Manager" << endl << endl << endl;
//        cout << "Press 1 to view Complains Information " << endl;
//        cout << "Press 2 to assign employees to a Complain " << endl;
//        cout << "Press 3 to view Complains waiting for Approval " << endl;
//        cout << "Press 4 to exit " << endl;
//        cin >> choice;
//        if (choice == 1)
//        {
//            this->sd->displayFormanager();
//           
//        }
//
//        else if (choice == 2)
//        {
//            string Cid;
//
//            if (sd->ValidCids() == 1)
//            {
//                cout << "Enter id of Complain you want to assign against" << endl;
//                cin >> Cid;
//                assignEmployee(Cid);
//            }
//            else
//            {
//                cout << "No Complains available for assignment" << endl;
//            }
//        }
//        else if (choice == 3)
//        {
//            if (displayPending())
//            {
//                ApprovePending();
//            }
//            else
//            {
//                cout << "No pending Complains waiting for approval" << endl;
//            }
//        }
//        else if (choice == 4)
//        {
//            cout << "Exiting " << endl;
//            break;
//        }
//
//        std::this_thread::sleep_for(std::chrono::seconds(5));
//    }
//
//}
//
//void Manager::assignEmployee(string complain)
//{
//    if (sd->CheckComplainExistence(complain))
//    {
//
//        sd->DisplayEmp();
//        int no;
//        cout << "How many employees you want to assign for this complain " << endl;
//        cin >> no;
//
//        Employee** e = new Employee * [no];
//        for (int i = 0; i < no; i++)
//        {
//            e[i] = new Employee();
//        }
//        for (int i = 0; i < no; i++)
//        {
//            string eid;
//            cout << "Enter the id of employee no " << i + 1 << endl;
//            cin >> eid;
//            e[i]->setID(eid);
//
//        }
//
//        sd->assign(complain, e, no);
//    }
//    else {
//        cout << "No valid complain against this id " << endl;
//    }
//}
//
//// Child class for IT Department
//class ITDepartment : public staff_departments
//{
//
//    static ITDepartment* instance;
//
//    ITDepartment()
//        : staff_departments("IT", "it")
//    {
//
//    }
//
//public:
//    static ITDepartment* getInstance();
//    ITDepartment(const ITDepartment&) = delete;
//    ITDepartment& operator=(const ITDepartment&) = delete;
//
//
//};
//
//ITDepartment* ITDepartment::instance = nullptr;
//
//ITDepartment* ITDepartment::getInstance() {
//    if (!instance) {
//        instance = new ITDepartment();
//    }
//    return instance;
//}
//
//
//// Child class for Administration Department
//class AdministrationDepartment : public staff_departments
//{
//
//    static AdministrationDepartment* instance;
//
//    AdministrationDepartment()
//        : staff_departments("Administration", "ad")
//    {
//
//    }
//
//public:
//    static AdministrationDepartment* getInstance();
//    AdministrationDepartment(const AdministrationDepartment&) = delete;
//    AdministrationDepartment& operator=(const AdministrationDepartment&) = delete;
//
//    //void fileComplain(string teachID, string Decription, int status)
//    //{
//
//    //}
//
//};
//AdministrationDepartment* AdministrationDepartment::instance = nullptr;
//
//AdministrationDepartment* AdministrationDepartment::getInstance() {
//    if (!instance) {
//        instance = new AdministrationDepartment();
//    }
//    return instance;
//}
//
//
//
//// Child class for Accounts Department
//class AccountsDepartment : public staff_departments
//{
//
//    static AccountsDepartment* instance;
//
//    AccountsDepartment()
//        : staff_departments("Accounts", "ac")
//    {
//
//    }
//
//public:
//    static AccountsDepartment* getInstance();
//    AccountsDepartment(const AccountsDepartment&) = delete;
//    AccountsDepartment& operator=(const AccountsDepartment&) = delete;
//
//
//};
//AccountsDepartment* AccountsDepartment::instance = nullptr;
//
//AccountsDepartment* AccountsDepartment::getInstance() {
//    if (!instance) {
//        instance = new AccountsDepartment();
//    }
//    return instance;
//}
//
//
//class csystem
//{
//private:
//    int num_of_departs = 6;
//    Department** depts = new Department * [num_of_departs];
//    int num_of_teaching_departs = 3;
//
//    static csystem* instance;
//
//    string d_id;
//    string d_password;
//
//    string a_id;
//    string a_password;
//
//    csystem()
//    {
//
//        depts[0] = ElectricalEngineeringDepartment::getInstance();
//        depts[1] = ManagementDepartment::getInstance();
//        depts[2] = ComputerScienceDepartment::getInstance();
//        depts[3] = AccountsDepartment::getInstance();
//        depts[4] = AdministrationDepartment::getInstance();
//        depts[5] = ITDepartment::getInstance();
//
//        for (int i = 0; i < num_of_departs; i++)
//        {
//            depts[i]->loadData();
//        }
//
//        FILE* file;
//
//        if (fopen_s(&file, "st.txt", "r") != 0) {
//            std::cerr << "Error opening the file.\n";
//            return;
//        }
//
//        d_id = "\0";
//        d_password = "\0";
//
//        a_id = "\0";
//        a_password = "\0";
//
//        char id[7] = "\0";
//        char pass[15] = "\0";
//
//
//        fscanf_s(file, "%[^;];%[^\n]\n", id, sizeof(id), pass, sizeof(pass));
//
//        d_id = string(id);
//        d_password = string(pass);
//
//
//        fscanf_s(file, "%[^;];%s", id, sizeof(id), pass, sizeof(pass));
//
//        a_id = string(id);
//        a_password = string(pass);
//
//
//        fclose(file);
//
//
//        for (int i = 0; i < num_of_departs; i++)
//        {
//
//            depts[i]->displayInfo();
//
//        }
//
//        cout << "director ID is: " << d_id << " and password is : " << d_password << endl;
//
//
//        cout << "Administrator ID is: " << a_id << " & password is : " << a_password << endl;
//
//
//
//
//    }
//
//public:
//
//    static csystem* getInstanc();
//    csystem(const csystem&) = delete;
//    csystem& operator=(const csystem&) = delete;
//
//    void closing_loading_back_to_file()
//    {
//
//        for (int i = 0; i < num_of_departs; i++)
//        {
//
//            depts[i]->upload_data_to_file();
//
//        }
//
//    }
//
//    Complain* fileComplain(Teacher* t, string dept, string teachID, string description, int status) // dept contain dept id it ac ad
//    {
//        for (int i = 3; i < num_of_departs; i++)
//        {
//            if (depts[i]->retID() == dept)
//            {
//                //file complain
//
//                Complain* ptr;
//                ptr = depts[i]->fileComplain(t, dept, teachID, description, status);
//                return ptr;
//            }
//        }
//    }
//
//    void InformManager(string id, string eid)
//    {
//        string newString = id.substr(1, 2);
//        for (int i = 3; i < num_of_departs; i++)
//        {
//            if (depts[i]->retID() == newString)
//            {
//                depts[i]->NotifyManager(id);
//            }
//        }
//    }
//
//    void InformTeacher(Employee* e, string cid)
//    {
//        e->addforFeedback(cid);
//
//
//    }
//
//    void login_to_system()
//    {
//
//        while (1)
//        {
//
//
//
//            int choice;
//            string id;
//            system("cls");
//            cout << "\t\t\t\t WELCOME TO COMPLAIN MANAGEMENT SYSTEM \n\n\n\n";
//            cout << " Enter your ID to LOGIN OR 'q' To Quit program :  ";
//
//
//            /*   cout << "\t\t1) LOGIN as Teacher" << endl;
//               cout << "\t\t2) LOGIN as Manager" << endl;
//               cout << "\t\t3) LOGIN as Staff" << endl;
//               cout << "\t\t4) LOGIN as Director" << endl;
//               cout << "\t\t5) LOGIN as Adminstrator CHIEF" << endl;;*/
//               //cin >> choice;
//
//
//
//               //cout << "Enter your id " << endl;
//            cin >> id;
//
//            if (id == "q")
//            {
//                return;
//            }
//
//            string newString = id.substr(0, 2);
//            cout << endl;
//
//            if (id == "d-1111")
//            {
//                string p = "\0";
//
//                cout << "Please enter your password : ";
//                cin >> p;
//                cout << endl;
//
//                if (p == d_password)
//                {
//                    cout << "Welcome back sir \n\n";
//
//                    director();
//                }
//                else
//                {
//                    cout << "Sorry, this password was not correct try again later.\n\n";
//                }
//
//            }
//            else if (id == "a-1111")
//            {
//
//                string p = "\0";
//
//                cout << "Please enter your password : ";
//                cin >> p;
//                cout << endl;
//
//                if (p == a_password)
//                {
//                    cout << "Welcome back, you are logged in as an Administrator. \n\n";
//
//                    administrator();
//                }
//                else
//                {
//                    cout << "Sorry, this password was not correct try again later.\n\n";
//                }
//
//            }
//            else
//            {
//
//                for (int i = 0; i < num_of_departs; i++)
//                {
//                    if (depts[i]->checkExistence(id))
//                    {
//
//                        Employee* e = depts[i]->returnEmp(id);
//                        e->display_portal();
//                        break;
//                    }
//                }
//
//            }
//
//            std::this_thread::sleep_for(std::chrono::seconds(5));
//
//        }
//    }
//
//    void director()
//    {
//        char ch = '\0';
//
//        cout << "Enter '1': If you want to get summary of complaints by date, 'anyother key': if you want to get summary of complaints by department ID : ";
//        cin >> ch;
//        cout << endl;
//
//        if (ch == '1')
//        {
//
//            cout << "Please enter date range between which you want to see complaints, excluding those exact dates.\n";
//
//            string s_date = "\0";
//            string d_date = "\0";
//
//            Date st;
//            Date ed;
//
//            do
//            {
//
//                cout << "Please enter start date (format : dd/mm/yyyy) : ";
//                cin >> s_date;
//                cout << endl;
//
//                cout << "Please enter end date (format : dd/mm/yyyy) : ";
//                cin >> d_date;
//                cout << endl;
//
//            } while (st.check_format(s_date) != true || st.check_format(d_date) != true);
//
//
//            st.set_date(s_date);
//
//            ed.set_date(d_date);
//
//
//            for (int i = num_of_teaching_departs; i < num_of_departs; i++)
//            {
//
//                staff_departments* s = dynamic_cast<staff_departments*>(depts[i]);
//
//                s->display_comps_within_range(st, ed);
//
//            }
//
//        }
//        else
//        {
//            cout << "Please enter ID of the department (i.e: 'it', 'ac', 'ad') to get its complaints summary : ";
//            string D_id;
//            cin >> D_id;
//            cout << endl;
//
//            for (int i = num_of_teaching_departs; i < num_of_departs; i++)
//            {
//
//                if (D_id == depts[i]->retID())
//                {
//
//
//                    staff_departments* s = dynamic_cast<staff_departments*>(depts[i]);
//
//                    s->display_summary_of_AllComplaints();
//
//
//                    i = num_of_departs;
//
//                }
//            }
//
//
//        }
//
//
//
//        char contin = '0';
//
//        cout << "If you want to see full details about a specific complain please press '1' otherwise any other key. :";
//        cin >> contin;
//        cout << endl;
//
//        while (contin == '1')
//        {
//            string cid = "\0";
//
//            cout << "Please enter ID of that complain: ";
//            cin >> cid;
//            cout << endl;
//
//            string newString = cid.substr(1, 2);
//
//            string ch = "\0";
//
//            for (int i = num_of_teaching_departs; i < num_of_departs; i++)
//            {
//                ch = depts[i]->retID().substr(0, 2);
//
//                if (ch == newString)
//                {
//
//                    staff_departments* s = dynamic_cast<staff_departments*>(depts[i]);
//
//                    if (!s->get_complete_details(cid))
//                    {
//                        cout << "Sorry, that complaint ID doesn't exist. \n\n";
//                    }
//
//                }
//
//
//
//            }
//
//
//
//            cout << "If you want to see full details about anyother specific complain please press '1' otherwise any other key. :";
//            cin >> contin;
//            cout << endl;
//
//        }
//
//        cout << "Allah Hafiz.\n";
//        system("cls");
//    }
//
//    void administrator()
//    {
//
//        char choice = '\0';
//
//        do
//        {
//            system("cls");
//            cout << "Please enter 0: To add an employee, 1: To remove an employee, 2: To add a teacher, 3: To remove a teacher, 4: To replace a manager, OR any other key to exit : ";
//            cin >> choice;
//            cout << endl;
//
//            string ID = "\0";
//            string name = "\0";
//            int age = -1;
//            char gen = '\0';
//
//            if (choice == '0')
//            {
//
//
//                cout << "Please enter ID of the department (i.e: 'it', 'ac', 'ad') in which you want to add a new employee : ";
//                cin >> ID;
//                cout << endl;
//
//
//                for (int i = num_of_teaching_departs; i < num_of_departs; i++)
//                {
//
//                    if (ID == depts[i]->retID())
//                    {
//                        cout << "Please enter name of this employee: ";
//                        cin.ignore();
//                        getline(cin, name);
//                        cout << endl;
//
//                        do
//                        {
//                            cout << "Please enter age of this employee: ";
//                            cin >> age;
//                            cout << endl;
//
//                        } while (age <= 12);//12 years old or under can't work as a staff member
//
//
//
//                        do
//                        {
//                            cout << "Please enter gender ('M' Or 'F' ) of this employee: ";
//                            cin >> gen;
//                            cout << endl;
//
//                        } while (gen != 'M' && gen != 'F');
//
//
//                        staff_departments* s = dynamic_cast<staff_departments*>(depts[i]);
//
//                        s->add_new_staff_member(name, age, gen);
//                        cout << "Staff added" << endl;
//                        i = num_of_departs;//to stop loop from checking furhter data
//
//                    }
//
//                }
//
//
//            }
//            else if (choice == '1')
//            {
//                cout << "Please enter ID of the department (i.e: 'it', 'ac', 'ad') from which you want to remove an employee : ";
//                cin >> ID;
//                cout << endl;
//
//                for (int i = num_of_teaching_departs; i < num_of_departs; i++)
//                {
//
//                    if (ID == depts[i]->retID())
//                    {
//                        cout << "\nThese are all employees working in this department : \n\n";
//                        depts[i]->displayInfo();
//
//                        string e_id;
//
//
//                        do
//                        {
//
//                            cout << "Please enter ID of the employee/Staff you want to remove (Don't enter ID of a manager): ";
//                            cin >> e_id;
//                            cout << endl;
//
//
//                        } while (e_id.substr(e_id.length() - 4) == "0001");
//
//
//
//
//                        staff_departments* s = dynamic_cast<staff_departments*>(depts[i]);
//
//                        s->remove_a_staff_member(e_id);
//
//                        i = num_of_departs;//to stop loop from checking furhter data
//
//                    }
//
//                }
//
//            }
//            else if (choice == '2')
//            {
//
//
//                cout << "Please enter ID of the department (i.e: 'cs', 'ee', 'mg') in which you want to add a new Teacher : ";
//                cin >> ID;
//                cout << endl;
//
//
//                for (int i = 0; i < num_of_teaching_departs; i++)
//                {
//
//                    if (ID == depts[i]->retID())
//                    {
//
//                        cout << "Please enter name of the Teacher: ";
//                        cin.ignore();
//                        getline(cin, name);
//                        cout << endl;
//
//
//                        do
//                        {
//                            cout << "Please enter age of this Teacher: ";
//                            cin >> age;
//                            cout << endl;
//
//                        } while (age <= 12);//12 years old or under can't work as a staff member
//
//
//
//                        do
//                        {
//                            cout << "Please enter gender ('M' Or 'F' ) of this Teacher: ";
//                            cin >> gen;
//                            cout << endl;
//
//                        } while (gen != 'M' && gen != 'F');
//
//
//                        Teaching_departments* s = dynamic_cast<Teaching_departments*>(depts[i]);
//
//                        s->add_new_Teacher(name, age, gen);
//
//                        i = num_of_departs;//to stop loop from checking furhter data
//
//                    }
//
//                }
//
//
//            }
//            else if (choice == '3')
//            {
//
//                cout << "Please enter ID of the department (i.e: 'cs', 'ee', 'mg') from which you want to remove a Teacher : ";
//                cin >> ID;
//                cout << endl;
//
//
//                for (int i = 0; i < num_of_teaching_departs; i++)
//                {
//
//
//                    if (ID == depts[i]->retID())
//                    {
//
//                        cout << "\nThese are all Teachers working in this department : \n\n";
//                        depts[i]->displayInfo();
//
//
//                        string e_id;
//
//
//                        cout << "Please enter ID of the Teacher you want to remove: ";
//                        cin >> e_id;
//                        cout << endl;
//
//
//
//
//                        Teaching_departments* s = dynamic_cast<Teaching_departments*>(depts[i]);
//
//                        s->remove_a_Teacher(e_id);
//
//                        i = num_of_departs;//to stop loop from checking furhter data
//
//                    }
//
//                }
//
//
//
//            }
//            else if (choice == '4')
//            {
//
//
//                cout << "Please enter ID of the department (i.e: 'it', 'ac', 'ad') from which you want to replace a manager : ";
//                cin >> ID;
//                cout << endl;
//
//
//                for (int i = num_of_teaching_departs; i < num_of_departs; i++)
//                {
//
//                    if (ID == depts[i]->retID())
//                    {
//                        cout << "Please enter name of new manager: ";
//                        cin.ignore();
//                        getline(cin, name);
//                        cout << endl;
//
//                        do
//                        {
//                            cout << "Please enter age of a new manager: ";
//                            cin >> age;
//                            cout << endl;
//
//                        } while (age <= 12);//12 years old or under can't work as a staff member
//
//
//
//                        do
//                        {
//                            cout << "Please enter gender ('M' Or 'F' ) of this new manager: ";
//                            cin >> gen;
//                            cout << endl;
//
//                        } while (gen != 'M' && gen != 'F');
//
//
//                        staff_departments* s = dynamic_cast<staff_departments*>(depts[i]);
//
//                        s->replace_a_manager(name, age, gen);
//
//                        i = num_of_departs;//to stop loop from checking furhter data
//
//                    }
//
//                }
//
//
//            }
//
//
//
//        } while (choice == '0' || choice == '1' || choice == '2' || choice == '3' || choice == '4');
//
//
//        cout << "\n\nThank-You for using our system.\n";
//
//    }
//
//    ~csystem()
//    {
//        closing_loading_back_to_file();
//
//        for (int i = 0; i < num_of_departs; ++i)
//        {
//            delete depts[i];
//        }
//
//        delete[] depts;
//    }
//
//};
//
//csystem* csystem::instance = nullptr;
//
//csystem* csystem::getInstanc()
//{
//    if (!instance) {
//        instance = new csystem();
//    }
//    return instance;
//}
//
//Complain* Teacher::fileComplain()
//{
//    string dept, description;
//    cout << "Enter the department you want to forward your complain too " << endl;
//    cin >> dept;
//    cout << "ENTER Description for problem " << endl;
//    cin.ignore();
//    getline(cin, description);
//
//    csystem* st = csystem::getInstanc();
//    Complain* ptr = st->fileComplain(this, dept, this->employeeId, description, 0);
//    this->add_comp_pointers(ptr);
//
//    st = nullptr;
//
//    return ptr;
//    //send the id to dept which will return complain pointer which will be added to teacher list 
//}
//
//
//void Staff::doWork(string id)
//{
//    csystem* st = csystem::getInstanc();
//    st->InformManager(id, this->employeeId);
//
//    st = nullptr;
//}
//
//bool Manager::ApprovePending()
//{
//    string id;
//    cout << "Pending complains id are " << endl;
//    this->displayPending();
//    cout << "Enter the id of complain you want to approve for " << endl;
//    cin >> id;
//    if (sd->resolveComplain(id))
//    {
//        cout << "Status of Complain against id " << id << " has been changed to Resolved " << endl;
//        this->Remove(id);
//        csystem* st = csystem::getInstanc();
//        st->InformTeacher(sd->ReturnTeacherAgainstComplainId(id), id);
//
//        st = nullptr;
//
//        return true;
//    }
//    else {
//        cout << "No complain with id " << id << " exist in the department" << endl;
//        return false;
//    }
//
//    // set status of complain id to 2
//
//}
//
//void Teacher::GiveFeedback()
//{
//    string cid;
//    cout << "Against which id you want to give feedback" << endl;
//    cin >> cid;
//    for (list<Complain*>::iterator it = comp_filed.begin(); it != comp_filed.end(); ++it)
//    {
//
//        if ((*it)->getID() == cid)
//        {
//            int choice;
//            cout << "IF you are not satisfied Press 0 If happy Press 1" << endl;
//            cin >> choice;
//            if (choice == 1)
//            {
//                string feedback;
//                cout << "Enter the feedback " << endl;
//                cin.ignore();
//                getline(cin, feedback);
//                (*it)->set_feedback(feedback);
//                cout << "Your Feedback was Recorded" << endl;
//                (*it)->setstatus(3);
//
//            }
//            else if (choice == 0)
//            {
//                (*it)->set_feedback("Not happy");
//                (*it)->setstatus(1);
//                cout << "Your Feedback was Recorded" << endl;
//            }
//        }
//    }
//
//    this->Remove(cid);
//}
//
//
//int main()
//{
//
//    csystem* st = csystem::getInstanc();
//
//    st->login_to_system();
//    st->~csystem();
//
//    return 0;
//}
