class Song:
    def __init__(self, title, artist):
        self.title = title
        self.artist = artist
        self.next = None  # Pointer to the next song

class Playlist:
    def __init__(self):
        self.head = None  # Head of the linked list

    def add_song(self, title, artist):
        new_song = Song(title, artist)
        if not self.head:
            self.head = new_song
            return
        last_song = self.head
        while last_song.next:
            last_song = last_song.next
        last_song.next = new_song

    def remove_song(self, title):
        current = self.head
        previous = None

        while current and current.title != title:
            previous = current
            current = current.next

        if not current:
            print(f'Song "{title}" not found in the playlist.')
            return
        
        if previous:
            previous.next = current.next
        else:
            self.head = current.next

        print(f'Song "{title}" has been removed from the playlist.')

    def display_playlist(self):
        current = self.head
        if not current:
            print("The playlist is empty.")
            return
        while current:
            print(f'Title: {current.title}, Artist: {current.artist}')
            current = current.next

# Example Usage
if __name__ == "__main__":
    playlist = Playlist()
    playlist.add_song("Shape of You", "Ed Sheeran")
    playlist.add_song("Blinding Lights", "The Weeknd")
    playlist.add_song("Levitating", "Dua Lipa")

    print("Current Playlist:")
    playlist.display_playlist()

    playlist.remove_song("Blinding Lights")
    print("\nUpdated Playlist:")
    playlist.display_playlist()

    playlist.remove_song("Nonexistent Song")  # Test removing a song that doesn't exist
