Solve zombies problem has two ways:

1. install dumb-init, be PID 1 instead of 'init', then init process should be PID 0.
  https://github.com/Yelp/dumb-init

2.kubernetes pause container update to 3.1
  https://www.ianlewis.org/en/almighty-pause-container
  https://github.com/kubernetes/kubernetes/blob/master/build/pause/CHANGELOG.md
