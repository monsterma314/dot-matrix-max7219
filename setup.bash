# append to PATH (add to end)
function append_path() {
    local dir="$1"
    
    if [[ ":$PATH:" != *":$dir:"* ]]; then
        if [[ ! -d "$dir" ]]; then
            echo "Adding $dir to path, but $dir does not exist"
        fi
        export PATH="${PATH:+"$PATH:"}$dir"
    fi
}

# prepend to PATH (add to beginning)
function prepend_path() {
    local dir="$1"
    
    if [[ ":$PATH:" != *":$dir:"* ]]; then
        if [[ ! -d "$dir" ]]; then
            echo "Adding $dir to path, but $dir does not exist"
        fi
        export PATH="$dir${PATH:+":$PATH"}"
    fi
}

# update PATH
append_path '/home/ryan/.platformio/penv/bin'

# update environment variables
export workspace="$(dirname "$(realpath "$BASH_SOURCE")")"
