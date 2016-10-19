# Author: Moe Murtadi
# Fall 2016
# Menu File, Movie list and tracking program


import os
import json

from user import User

def menu():
    name = input('What is your name?: ')
    filename ="{}.txt".format(name)
    if file_exists(filename):
        with open(filename, 'r') as f:
            json_data = json.load(f)
        user = User.from_json(json_data)
    else:
        user = User(name)

    user_input = input('****************************************************'
                       '\nEnter \'a\' if you would like to add media to the DB'
                       '\nEnter \'ls\' to list media'
                       '\nEnter \'w\' to mark media as watched/played'
                       '\nEnter \'d\' to delete an item'
                       '\nEnter \'l\' to see the list of watched/played media'
                       '\nEnter \'s\' to save'
                       '\nEnter \'q\' quit'
                       '\n****************************************************'
                       '\nSelection:\n')

    while user_input!= 'q':
        if user_input == 'a':
            movie_mtype = input('is this a movie or video game: ')
            if movie_mtype == 'game':
              movie_name = input('enter the game name: ')
            else:
              movie_name = input('enter the movie : ')
            movie_genre = input('enter the movie genre: ')
            user.add_movie(movie_name, movie_mtype, movie_genre)
        elif user_input == 'ls':
            for movie in user.movies:
                print('Name: {} Type: {} Genre: {} Watched: {}'.format(movie.name, movie_mtype, movie.genre, movie.watched))
        elif user_input == 'w':
            movie_name = input('Enter the movie name to set as watched: ')
            user.set_watched(movie_name)
        elif user_input == 'd':
            movie_name = input('Enter the movie name you want to delete: ')
            user.delete_movie(movie_name)
        elif user_input == 'l':
            for movie in user.watched_movies():
                print('Name: {} Type: {} Genre: {} Watched: {}'.format(movie.name, movie.mtype, movie.genre, movie.watched))
        elif user_input == 's':
            with open(filename, 'w') as f:
                json.dump(user.json(), f)

        user_input = input('**********************************************'
                           '\nEnter \'a\' to add media '
                           '\nEnter \'ls\' to list media'
                           '\nEnter \'w\' to mark media as watched/played'
                           '\nEnter \'d to delete an item'
                           '\nEnter \'l to see the list of watched/played media'
                           '\nEnter \'s\' to save'
                           '\nEnter \'q\' quit'
                           '\n**********************************************'
                           '\nSelection:\n')


def file_exists(filename):
    return os.path.isfile(filename)

menu()