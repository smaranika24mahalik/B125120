#include <iostream>
using namespace std;

class Recommender {
public:
    virtual void generateRecommendation(int userRating, int popularity) {
        cout << "Generating recommendation\n";
    }
};

class PersonalizedRecommender : public Recommender {
public:
    void generateRecommendation(int userRating, int popularity) override {
        double score = 0.7 * userRating + 0.3 * popularity;

        cout << "Personalized score: " << score << endl;
    }
};

class TrendingRecommender : public Recommender {
public:
    void generateRecommendation(int userRating, int popularity) override {
        double score = 0.3 * userRating + 0.7 * popularity;

        cout << "Trending score: " << score << endl;
    }
};

int main() {
    PersonalizedRecommender p;
    TrendingRecommender t;

    Recommender* ptr;

    ptr = &p;
    ptr->generateRecommendation(80, 60);

    ptr = &t;
    ptr->generateRecommendation(80, 60);

    return 0;
}