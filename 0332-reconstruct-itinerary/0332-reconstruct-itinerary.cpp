class Solution
{
    public:
       	// Define an unordered_map to store neighbors for each airport.
        unordered_map<string, multiset < string>> airportNeighbors;

   	// Recursive function to find the itinerary.
    void findItineraryRecursive(vector<string> &itinerary, string currentAirport)
    {
       	// While there are neighbors for the current airport:
        while (!airportNeighbors[currentAirport].empty())
        {
           	// Get the first available neighbor and remove it from the set.
            string nextAirport = *airportNeighbors[currentAirport].begin();
            airportNeighbors[currentAirport].erase(airportNeighbors[currentAirport].begin());

           	// Recursively explore the next airport.
            findItineraryRecursive(itinerary, nextAirport);
        }

       	// Add the current airport to the itinerary.
        itinerary.push_back(currentAirport);
    }

   	// Main function to find the itinerary.
    vector<string> findItinerary(vector<vector < string>> &tickets)
    {
       	// Populate the airportNeighbors map using the provided tickets.
        for (const auto &ticket: tickets)
        {
            airportNeighbors[ticket[0]].insert(ticket[1]);
        }

        vector<string> itinerary;	// Initialize the itinerary vector.
        string startingAirport = "JFK";	// Start from the JFK airport.

       	// Find the itinerary starting from JFK.
        findItineraryRecursive(itinerary, startingAirport);

       	// Reverse the itinerary to get the correct order.
        reverse(itinerary.begin(), itinerary.end());

        return itinerary;	// Return the final itinerary.
    }
};