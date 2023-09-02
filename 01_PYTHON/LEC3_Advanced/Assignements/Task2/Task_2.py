from pynotify import Notification
import psutil

battery=psutil.sensors_battery()
percent=battery.percent

print(percent)
Notification("battery percentage ",str(percent),"%percentage remaining",duration=10).send()
