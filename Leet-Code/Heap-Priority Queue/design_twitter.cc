#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
class Twitter {
public:
    std::unordered_map<int, std::vector<int>> db;

    std::unordered_map<int, std::unordered_set<int>> followers;
    Twitter() {}

    void postTweet(int userId, int tweetId) {
        db[userId].push_back(tweetId);
        if (followers[userId].empty()) {
            followers[userId].insert(userId);
        }

        return;
    }

    std::vector<int> getNewsFeed(int userId) {
        std::vector<int> tweets;
        std::unordered_set<int> tmp = followers[userId];
        for (int a : tmp) {
            for (int b : db[a]) {
                tweets.insert(tweets.begin(), b);
            }
        };
        return tweets;
    };

    void follow(int followerId, int followeeId) {
  
        followers[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
       followers[followerId].erase(followeeId);
       
    }
};
int main() {

  Twitter twitter;

  twitter.postTweet(1, 5);
  twitter.getNewsFeed(1);
  twitter.follow(1, 2);    // User 1 follows user 2.
  twitter.postTweet(2, 6); // User 2 posts a new tweet (id = 6).
};
