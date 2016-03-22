using namespace std;
class BMI {
public:
    void setHeight(int height);
    void setWeight(int weight);
    float getBmi();
    string getCategory(float B);
private:
    int h_value;
    int w_value;
};
