from datetime import datetime, timezone, timedelta

#import pytz | 아니 pytz 못쓰는거야 ㅅㅂ?

#print(datetime.datetime.now(pytz.timezone('Asia/Seoul')).strftime("%Y-%m-%d"))

print(datetime.now(timezone(timedelta(hours=9))).strftime("%Y-%m-%d"))