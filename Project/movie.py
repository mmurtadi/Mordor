# Author: Moe Murtadi
# Fall 2016
# Menu File, Movie list and tracking program, currently changing to include media ie. video games.


class Movie:
    def __init__(self, name, mtype, genre, watched):
        self.name = name
        self.mtype = mtype #any errors will most likely be do to change from movies to media/mtype
        self.genre = genre 
        self.watched = watched

    def __repr__(self):
        return "Movie: {}".format(self.name)

    def json(self):
        return {
            'name': self.name,
            'genre': self.genre,
            'media type': self.mtype
            'watched': self.watched
        }
#self reminder if i change the property of the movies,
    # I dont have to go elsewhere besides making the change here.

    @classmethod
    def from_json(cls, json_data): # {uses format and scrap using parameter set in __init__}
        return Movie(**json_data)