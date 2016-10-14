from user import User

user = User("Moe")

user.add_movie("Lord of The Rings", "Sci-Fi")
user.add_movie("Django Unchained", "Action")

user.save_to_file()