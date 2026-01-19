def incremental_module(start):
    counter = start

    def add(step):
        nonlocal counter
        counter+= step
        return counter
    return add

if __name__ == "__main__":
    counter = incremental_module(5)

    print(counter(1))
    print(counter(5))