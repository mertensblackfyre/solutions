#include <algorithm>
#include <functional>
#include <iostream>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
class Twitter {
public:
  std::unordered_map<int, std::vector<int>> db;

  std::unordered_map<int, std::pair<int, int>> tweets;
  std::unordered_map<int, std::unordered_set<int>> followers;
  int recent = 0;

  Twitter() {}

  void postTweet(int userId, int tweetId) {
    // db[userId].push_back(tweetId);

    tweets[userId].first = recent;
    tweets[userId].second = tweetId;

    if (followers[userId].empty()) {
      followers[userId].insert(userId);
    }

    recent++;
    return;
  };

  std::vector<int> getNewsFeed(int userId) {
    std::vector<int> feeds;
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    int i = 0;
    for (auto &it : tweets) {
      pq.push(it.first);
    };

    return feed;
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
