class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed)
    {
        int n = position.size();

        if (n == 0)
            return 0;

        vector<pair<int, double>> cars(n);

        for (int i = 0; i < n; i++)
        {
            double time = (double)(target-position[i]) / speed[i];
            cars[i] = {position[i], time};
        }

        sort(cars.begin(), cars.end(), [](const auto& a, const auto& b){
            return a.first > b.first;
        });

        int felts = 1;
        double max_time= cars[0].second;
        for (int i = 1; i < n; i++)
        {
            if (cars[i].second > max_time)
            {
                felts++;
                max_time = cars[i].second;
            }
            
        } 

        return felts;
    }
};
