// write a function to remove duplicates from an unsorted linked list

let store = [];

function node(inputData) {
    this.next = null;
    this.data = inputData;

    let self = this;
    this.appendToTail = (d) => {
        let end = new node(d);
        let n = self;
        while(n && n.next) {
            
            n = n.next;
        }
        console.log(`changing from ${n.data} to ${end.data}`);
        n.next = end;
    }

    this.read = () => {
        console.log(this)
    }

    return this;
}

function addToCollection(id) {
    if(store[id]) {
        // duplicate exists
        return false;
    }
    store[id] = true;
    return true;
}

function purgeDuplicates(store, node) {

    let isDupe = addToCollection(node.data);

    if(isDupe) {
        node = node.next;
    }

    if(node.next) {
        purgeDuplicates(store, node.next);
    }
}


let firstNode = new node(12);
firstNode.appendToTail(10);
firstNode.appendToTail(13);
firstNode.appendToTail(12);

purgeDuplicates(store, firstNode);

firstNode.read()