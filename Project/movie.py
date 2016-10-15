class Movie:
    def __init__(self, name, genre, watched):
        self.name = name
        self.genre = genre
        self.watched = watched

    def __repr__(self):
        return "Movie: {}".format(self.name)

    def json(self):
        return {
            'name': self.name,
            'genre': self.genre,
            'watched': self.watched
        }
#Json Note, so if i change the property of the movies,
    # I dont have to go elsewhere besides making the change here.

    @classmethod
    def from_json(cls, json_data): # {uses format and scrap using parameter set in __init__}
        return Movie(**json_data)