import datetime

# t = datetime.time(5, 25, 1)

# print(t)
# # t.minute=7


# print(t.max)
# print(t.resolution)

# print(datetime.date.today())

# print(datetime.datetime.max)

# d1=datetime.date(2019,12,3)
# print(d1)

# print(d1.replace(2018))


# d1=datetime.date.today()
# d2=datetime.date(1997,11,5)

# print(datetime.date.today().timetuple().tm_year)

born_year = datetime.datetime(1997, 11, 5)
today = datetime.datetime.now()
# print(born_year)
# print(today)
total_age = today-born_year
in_year_month=(total_age.days)/365
# print(type(total_age.days))
print(in_year_month)
